/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 12:55:26 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:40:57 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

int	ft_char(int c);
int	ft_string(char *str);
int	ft_hexadecimal(unsigned int number, char type);
int	ft_int(int num);
int	ft_pointer(unsigned long int number, int mod);
int	ft_check(char str);
int	ft_format(va_list *arg, char format);
int	ft_printf(const char *format, ...);
int	ft_unsigned(unsigned int number);

#endif
