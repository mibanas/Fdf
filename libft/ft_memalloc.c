/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 17:12:16 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 17:14:53 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char		*mem;
	size_t		i;

	i = 0;
	mem = (char *)malloc(sizeof(char) * size);
	if (!mem)
		return (NULL);
	ft_memset(mem, 0, size);
	return (mem);
}
