/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:04:50 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 13:04:46 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substring;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	substring = (char*)malloc(sizeof(char) * (len + 1));
	if (!substring)
		return (NULL);
	i = 0;
	j = start;
	while (start < len + j)
	{
		substring[i] = s[start];
		i++;
		start++;
	}
	substring[i] = '\0';
	return (substring);
}
