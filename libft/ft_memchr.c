/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 16:07:17 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 16:10:15 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*str;
	char		d;

	str = (char *)s;
	d = (char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == d)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
