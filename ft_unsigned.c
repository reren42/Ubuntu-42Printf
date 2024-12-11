/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:16:37 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:43:35 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int num)
{
	int		len;
	int		value;
	char	*base;

	base = "0123456789";
	len = 0;
	if (num >= 10)
	{
		value = ft_unsigned(num / 10);
		if (value == -1)
			return (-1);
		len += value;
	}
	if (ft_char(base[num % 10]) == -1)
		return (-1);
	return (len + 1);
}
