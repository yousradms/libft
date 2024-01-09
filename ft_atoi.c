/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 18:51:17 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/25 19:39:00 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	i;
	size_t	c;
	int		sign;

	i = 0;
	c = 0;
	sign = 1;
	while ((str[i] <= 13 && str[i] >= 9) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		c = c * 10 + str[i] - 48;
		if (c >= __LONG_MAX__ && sign == 1)
			return (-1);
		else if (c >= __LONG_MAX__ && sign == -1)
			return (0);
		i++;
	}
	return (c * sign);
}
