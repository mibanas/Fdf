/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:29:07 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 10:19:01 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *find)
{
	int		i;
	int		j;

	i = 0;
	if (find[0] == '\0')
		return ((char *)src);
	while (src[i] != '\0')
	{
		j = 0;
		while (src[i + j] == find[j] && src[i + j] != '\0')
		{
			if (find[j + 1] == '\0')
				return ((char *)(src + i));
			j++;
		}
		i++;
	}
	return (0);
}
