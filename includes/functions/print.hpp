/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgeny <rgeny@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:21:25 by rgeny             #+#    #+#             */
/*   Updated: 2022/08/05 10:50:59 by rgeny            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINT_HPP
# define PRINT_HPP

# include <iostream>
# include <exception>
# include <filesystem>

int	print_error				(std::exception const & err);
int	print_filesystem_error	(std::filesystem::filesystem_error const & err);

#endif

