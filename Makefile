# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rgeny <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/23 14:20:33 by rgeny             #+#    #+#              #
#    Updated: 2022/07/23 15:00:41 by rgeny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NEW_DIR				= mkdir -p
DEL_DIR				= rm -rf

CC					= c++
VALGRIND			= valgrind
COMPILE_FLAG		= $(DEPS_FLAG) -Wall -Werror -Wextra
DEPS_FLAG			= -MMD -MP
INCLUDES_FLAG		= -I$(INCLUDES_DIR) -I$(CLASS_DIR) -I$(FUNCTIONS_DIR)

INCLUDES_DIR		= includes/
CLASS_DIR			= class/
FUNCTIONS_DIR		= functions/
OBJS_DIR			= objs/
SRCS_DIR			= srcs/
C_STR_DIR			= $(SRCS_DIR)c_str/

VPATH				= $(SRCS_DIR) $(C_STR_DIR)


DEFAULT_FILES		= operator structor member accessor
SRCS				= $(addsuffix .cpp,		strllen)
OBJS				= $(patsubst %.cpp, $(OBJS_DIR)%.o, $(SRCS))
DEPS				= $(OBJS:.o=.d)

LIB					= fnxlib.a

all					: $(LIB)

$(LIB)				: $(OBJS)
					ar -rc $@ $^
					ranlib $@

$(OBJS_DIR)%.o		: %.cpp
					$(NEW_DIR) $(OBJS_DIR)
					$(CC) $(COMPILE_FLAG) -c $< $(INCLUDES_FLAG) -o $@

clean				:
					$(DEL_DIR) $(OBJS_DIR)

fclean				: clean
					$(DEL_DIR) $(LIB)

re					: fclean all

-include			$(DEPS)

.PHONY				: all clean fclean re valgrind

