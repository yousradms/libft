/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:45:04 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/28 18:50:30 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	if (dst == NULL && src == NULL)
		return (dst);
	i = 0;
	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	while (n > i)
	{
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (dst);
}
