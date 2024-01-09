/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:11:26 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/22 18:19:44 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*str;

	str = (unsigned char *)ptr;
	while (len--)
	{
		*str++ = (unsigned char) c;
	}
	return (ptr);
}
