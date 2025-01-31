/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makarkao <makarkao@student.1337.ma>+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 16:24:44 by makarkao#+#    #+#             */
/*   Updated: 2024/11/07 16:24:44 by makarkao###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int c)
{
	return (((c >= '0') && (c <= '9')) || ((c >= 'A') && (c <= 'Z'))
		|| ((c >= 'a') && (c <= 'z')));
}
