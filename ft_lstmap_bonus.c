/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydoumas <ydoumas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 19:51:13 by ydoumas           #+#    #+#             */
/*   Updated: 2023/12/29 12:48:31 by ydoumas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst2;
	t_list	*node2;

	lst2 = NULL;
	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	while (lst)
	{
		node2 = (t_list *)malloc (sizeof(t_list));
		if (!node2)
		{
			ft_lstclear(&lst2, del);
			return (NULL);
		}
		node2->next = NULL;
		node2->content = f(lst->content);
		ft_lstadd_back(&lst2, node2);
		lst = lst->next;
	}
	return (lst2);
}
void *toupperr(void *s)
{
	char *s33;
	int i = 0;
	s33 = (char *)s;
	if(s33[i] >= 'a'&& s33[i]<= 'z')
		s33[i]=s33[i]-32;
	return (s);
}
void del(void *content)
{
	free(content);
}
int main()
{
	t_list *head = NULL;
	char x = 'a';
	t_list *node1 = ft_lstnew(&x);
	char y = 'b';
	t_list *node2 = ft_lstnew(&y);
	head = node1;
	node1->next = node2;
	t_list *node33 = ft_lstmap(head ,&toupperr,&del);
	printf("%c \n",*((char*)(node33->content)));
	printf("%c \n",*((char*)(node33->next->content)));
}