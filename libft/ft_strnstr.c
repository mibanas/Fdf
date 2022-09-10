/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:31:00 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 10:19:13 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (src[i] == find[j] && src[i] != '\0' && i < len)
		{
			if (find[j + 1] == '\0')
				return ((char *)(src + i - j));
			j++;
			i++;
		}
		i++;
	}
	return (0);
}
