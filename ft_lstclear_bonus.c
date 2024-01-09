/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:46:32 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/28 19:18:10 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*lst2;
	t_list	*tmp;

	if (!lst || !del)
		return ;
	lst2 = *lst;
	while (lst2)
	{
		tmp = lst2;
		lst2 = lst2->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = NULL;
}
