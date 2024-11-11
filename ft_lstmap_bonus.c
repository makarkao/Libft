/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.1337.ma>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:44 by makarkao#+#    #+#             */
/*   Updated: 2024/11/07 16:24:44 by makarkao###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*m;
	t_list	*flst;

	n = lst;
	flst = NULL;
	if (!lst || !f)
		return (NULL);
	while (n)
	{
		m = ft_lstnew(f(n->content));
		if (!m)
		{
			ft_lstclear(&flst, del);
			return (NULL);
		}
		ft_lstadd_back(&flst, m);
		n = n->next;
	}
	return (flst);
}
