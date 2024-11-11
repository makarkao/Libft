/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.1337.ma>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:44 by makarkao#+#    #+#             */
/*   Updated: 2024/11/07 16:24:44 by makarkao###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *str, const char *dst, size_t n)
{
	size_t	i;
	size_t	j;

	if (!str && !n)
		return (NULL);
	if (!dst[0] && !n)
		return ((char *)str);
	if (!dst[0] && !str[0])
		return ((char *)str);
	i = 0;
	while (str[i] && i < n)
	{
		j = 0;
		while (dst[j] && str[i + j] && (str[i + j] == dst[j]) && (i + j) < n)
			j++;
		if (dst[j] == '\0')
			return ((char *)(str + i));
		if (i + j >= n)
			return (NULL);
		i++;
	}
	return (NULL);
}
