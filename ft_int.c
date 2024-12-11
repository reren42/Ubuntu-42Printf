/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 22:37:09 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:44:24 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_int(int num)
{
	int	len;
	int	value;

	len = 0;
	if (num == -2147483648)
		return (ft_string("-2147483648"));
	if (num < 0)
	{
		if (ft_char('-') == -1)
			return (-1);
		len++;
		num *= -1;
	}
	if (num == 0)
		return (ft_char('0'));
	if (num >= 10)
	{
		value = ft_int(num / 10);
		if (value == -1)
			return (-1);
		len += value;
	}
	if (ft_char("0123456789"[num % 10]) == -1)
		return (-1);
	return (len + 1);
}
