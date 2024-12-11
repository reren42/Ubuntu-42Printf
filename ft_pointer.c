/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:19:48 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:45:18 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int number, int mod)
{
	int	len;
	int	value;

	if (!number)
		return (ft_string("(nil)"));
	len = 0;
	if (mod == 1)
	{
		if (ft_string("0x") == -1)
			return (-1);
		mod = 0;
		len += 2;
	}
	if (number >= 16)
	{
		value = ft_pointer(number / 16, mod);
		if (value == -1)
			return (-1);
		len += value;
	}
	if (ft_char("0123456789abcdef"[number % 16]) == -1)
		return (-1);
	return (len + 1);
}
