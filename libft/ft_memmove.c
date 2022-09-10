/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:06:21 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 11:19:52 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*tab;

	tab = (char*)malloc(sizeof(char) * n);
	ft_memcpy(tab, src, n);
	ft_memcpy(dst, tab, n);
	free(tab);
	return ((void *)dst);
}
