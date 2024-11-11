/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.1337.ma>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:44 by makarkao#+#    #+#             */
/*   Updated: 2024/11/07 16:24:44 by makarkao###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_ischrset(char const *set, char c)
{
	int	i;

	i = 0;
	if (!set[0] || !set)
		return (0);
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	p;
	size_t	k;
	size_t	len;
	char	*str;

	if (!s1)
		return (NULL);
	(1) && (i = 0, p = ft_strlen(s1) - 1);
	while (s1[i] && ft_ischrset(set, s1[i]))
		i++;
	while (p >= i && ft_ischrset(set, s1[p]))
		p--;
	if (p < i || !s1[0])
		len = 1;
	else if (p >= i)
		len = p - i + 2;
	str = malloc(sizeof(char) * (len));
	if (!str)
		return (NULL);
	k = 0;
	while (i <= p && s1[0])
		str[k++] = s1[i++];
	return (str[k] = '\0', (str));
}
