# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgeny <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 14:20:33 by rgeny             #+#    #+#              #
#    Updated: 2022/08/02 11:30:15 by rgeny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NEW_DIR				= mkdir -p
DEL_DIR				= rm -rf

CC					= c++
VALGRIND			= valgrind
COMPILE_FLAG		= $(DEPS_FLAG) -Wall -Werror -Wextra -g -std=c++20
COMPILE_EXE_FLAG	= $(COMPILE_FLAG) -D FNX_MAIN=4
DEPS_FLAG			= -MMD -MP
INCLUDES_FLAG		= $(addprefix -I,	$(INCLUDES_DIR) \
										$(CLASS_DIR) \
										$(DEFINES_DIR) \
										$(FUNCTIONS_DIR) \
										$(TEMPLATES_DIR))

INCLUDES_DIR		= includes/
CLASS_DIR			= $(INCLUDES_DIR)class/
DEFINES_DIR			= $(INCLUDES_DIR)defines/
FUNCTIONS_DIR		= $(INCLUDES_DIR)functions/
TEMPLATES_DIR		= $(INCLUDES_DIR)templates/
OBJS_DIR			= objs/
SRCS_DIR			= srcs/
STR_DIR				= $(SRCS_DIR)str/
EXCEPTIONS_DIR		= $(SRCS_DIR)exceptions/
PRINT_DIR			= $(SRCS_DIR)print/
NOTCASESTRING_DIR	= $(SRCS_DIR)NotCaseString/
STD_DIR				= $(SRCS_DIR)std/

VPATH				= $(SRCS_DIR)
VPATH				+=$(STR_DIR)
VPATH				+=$(EXCEPTIONS_DIR)
VPATH				+=$(PRINT_DIR)
VPATH				+=$(NOTCASESTRING_DIR)
VPATH				+=$(STD_DIR)


DEFAULT_FILES		= operator structor member accessor
SRCS				= $(addsuffix .cpp,					main \
														strllen \
														split \
														join \
														wrong_number_of_arguments \
														wrong_parameters \
														error \
						$(addprefix NotCaseString.,		$(DEFAULT_FILES) \
														find_last_of \
														compare \
														init_case_off \
														find \
														find_first_not_of \
														find_first_of \
														find_last_not_of \
														rfind) \
														filesystem)
MAIN				= srcs/main.cpp
OBJS				= $(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS))
DEPS				= $(OBJS:.o=.d)

LIB					= fnxlib.a
EXE					= fnxlib.out

all					: $(LIB)

exe					:
					make fclean
					make LIB="$(EXE)" COMPILE_FLAG="$(COMPILE_EXE_FLAG)"
					$(CC) $(COMPILE_EXE_FLAG) $(OBJS) -o $(EXE)

$(LIB)				: $(OBJS)
ifneq ($(LIB), $(EXE))
					ar -rc $@ $^
					ranlib $@
endif

$(OBJS_DIR)%.o		: %.cpp
					$(NEW_DIR) $(OBJS_DIR)
					$(CC) $(COMPILE_FLAG) -c $< $(INCLUDES_FLAG) -o $@

clean				:
					$(DEL_DIR) $(OBJS_DIR)

fclean				: clean
					$(DEL_DIR) $(LIB) $(EXE)

re					: fclean all

-include			$(DEPS)

.PHONY				: all clean fclean re valgrind exe

