/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 11:08:16 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/26 11:09:09 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	int		octect;
	char	*str;

	octect = (unsigned int)n;
	str = (char *)s;
	i = 0;
	while (i < octect)
	{
		str[i] = '\0';
		i++;
	}
}
