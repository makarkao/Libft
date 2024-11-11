/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.1337.ma>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:44 by makarkao#+#    #+#             */
/*   Updated: 2024/11/07 16:24:44 by makarkao###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)malloc(nmemb * size);
	if (!b)
		return (NULL);
	while (i < (nmemb * size))
	{
		b[i] = 0;
		i++;
	}
	return ((void *)b);
}
