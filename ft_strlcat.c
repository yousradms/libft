/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:29:25 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/28 14:19:15 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len_dst;
	size_t	i;

	len_src = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (len_src);
	len_dst = ft_strlen(dst);
	if (dstsize <= len_dst)
		return (dstsize + len_src);
	i = 0;
	if (dstsize > len_dst + len_src)
		dstsize = len_dst + len_src + 1;
	while (src[i] && len_dst + i < dstsize - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_src + len_dst);
}
