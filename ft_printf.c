/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:21:22 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:40:52 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_check(char str)
{
	return (str == 'c' || str == 'd' || str == 'i' || str == 'u' || str == '%'
		|| str == 's' || str == 'x' || str == 'X' || str == 'p');
}

int	ft_format(va_list *arg, char format)
{
	if (format == 'c')
		return (ft_char(va_arg((*arg), int)));
	else if (format == 's')
		return (ft_string(va_arg((*arg), char *)));
	else if (format == 'p')
		return (ft_pointer(va_arg((*arg), unsigned long), 1));
	else if (format == 'd' || format == 'i')
		return (ft_int(va_arg((*arg), int)));
	else if (format == 'u')
		return (ft_unsigned(va_arg((*arg), unsigned int)));
	else if (format == 'X' || format == 'x')
		return (ft_hexadecimal(va_arg((*arg), unsigned int), format));
	else if (format == '%')
		return (ft_char('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	int		value;
	va_list	arg;

	i = -1;
	len = 0;
	if (!format)
		return (-1);
	va_start(arg, format);
	while (format[++i] != '\0')
	{
		if (format[i] == '%' && ft_check(format[i + 1]))
		{
			value = ft_format(&arg, format[++i]);
			if (value == -1)
				return (-1);
			len += value - 1;
		}
		else if (ft_char(format[i]) == -1)
			return (-1);
		len++;
	}
	va_end(arg);
	return (len);
}
