/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:17:25 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:40:08 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexadecimal(unsigned int number, char type)
{
	int	len;
	int	value;

	len = 0;
	if (number >= 16)
	{
		value = ft_hexadecimal(number / 16, type);
		if (value == -1)
			return (-1);
		len += value;
	}
	if (type == 'x')
	{
		if (ft_char("0123456789abcdef"[number % 16]) == -1)
			return (-1);
	}
	if (type == 'X')
	{
		if (ft_char("0123456789ABCDEF"[number % 16]) == -1)
			return (-1);
	}
	return (len + 1);
}
