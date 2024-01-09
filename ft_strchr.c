/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:30:09 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/25 19:37:58 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			c1;

	c1 = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c1)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == c1)
		return ((char *) &s[i]);
	return (NULL);
}
