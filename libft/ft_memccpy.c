/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:01:24 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 12:43:07 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*sc;

	i = 0;
	dst = (unsigned char *)dest;
	sc = (unsigned char *)src;
	while (i < n)
	{
		dst[i] = sc[i];
		if (dst[i] == (unsigned char)c)
			return ((void *)(dest + i + 1));
		i++;
	}
	return (NULL);
}
