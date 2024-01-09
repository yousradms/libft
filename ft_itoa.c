/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 17:48:11 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/25 19:34:33 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbr_counter(long nbr)
{
	int	count;

	count = 0;
	if (nbr < 0)
	{
		count++;
		nbr = -nbr;
	}
	if (nbr == 0)
		count++;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		count++;
	}
	return (count);
}

static char	*nbr_alloc(int len)
{
	char	*temp;

	temp = malloc((len + 1) * sizeof(char));
	if (!temp)
		return (NULL);
	temp[0] = '0';
	return (temp);
}

char	*ft_itoa(int n)
{
	int		i;
	int		len;
	long	nbr;
	char	*res;

	nbr = n;
	len = nbr_counter(nbr);
	res = nbr_alloc(len);
	if (!res)
		return (NULL);
	if (nbr < 0)
		nbr = -nbr;
	i = len - 1;
	while (nbr != 0)
	{
		res[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i--;
	}
	if (n < 0)
		res[0] = '-';
	res[len] = '\0';
	return (res);
}
