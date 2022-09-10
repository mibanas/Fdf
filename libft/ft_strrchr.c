/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:28:01 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 01:35:21 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = ((int)ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == (const char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
