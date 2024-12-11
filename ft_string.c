/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reren <reren@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 13:16:07 by reren             #+#    #+#             */
/*   Updated: 2024/12/11 15:41:02 by reren            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stddef.h>

int	ft_string(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		if (ft_string("(null)") == -1)
			return (-1);
		return (6);
	}
	while (str[i])
	{
		if (ft_char(str[i]) == -1)
			return (-1);
		i++;
	}
	return (i);
}
