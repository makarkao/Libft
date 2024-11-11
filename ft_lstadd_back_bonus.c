/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.1337.ma>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:44 by makarkao#+#    #+#             */
/*   Updated: 2024/11/07 16:24:44 by makarkao###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*n;

	if (!lst || !new)
		return ;
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	n = *lst;
	while (n->next)
		n = n->next;
	n->next = new;
}
