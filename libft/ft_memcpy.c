/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 15:41:31 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 15:59:47 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*sc;

	i = 0;
	dst = dest;
	sc = src;
	while (i < n)
	{
		dst[i] = sc[i];
		i++;
	}
	return (dest);
}
