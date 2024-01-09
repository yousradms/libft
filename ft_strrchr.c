/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:02:46 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/28 16:44:30 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*res;
	char			c1;

	c1 = (char) c;
	res = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			res = (char *) &s[i];
		i++;
	}
	if (s[i] == c1)
		res = (char *) &s[i];
	return (res);
}
