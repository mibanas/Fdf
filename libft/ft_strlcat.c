/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:25:50 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 16:26:07 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	size_t d_len;
	size_t s_len;
	size_t i;
	size_t j;

	d_len = ft_strlen(dest);
	s_len = ft_strlen(src);
	i = 0;
	while (dest[i] && i < size)
		i++;
	if (size - i == 0)
		return (size + s_len);
	j = 0;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (d_len + s_len);
}
