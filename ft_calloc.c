/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 19:54:06 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/28 19:52:07 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (size != 0 && count > SIZE_T_MAX / size)
		return (NULL);
	if (count < 0 || size < 0)
		return (NULL);
	tmp = malloc(size * count);
	if (!tmp)
		return (NULL);
	ft_bzero(tmp, size * count);
	return (tmp);
}
