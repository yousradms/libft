/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:32:12 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/28 16:22:16 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t_s1;
	unsigned char	*t_s2;
	size_t			i;

	i = 0;
	t_s1 = (unsigned char *)s1;
	t_s2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (i < n - 1)
	{
		if (t_s1[i] == t_s2[i])
			i++;
		else
			return ((unsigned char)t_s1[i] - (unsigned char)t_s2[i]);
	}
	return ((unsigned char)t_s1[i] - (unsigned char) t_s2[i]);
}
