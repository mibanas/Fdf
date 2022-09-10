/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:32:12 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 21:34:20 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	unsigned int	i;
	int				nb;
	char			*str;
	char			seg;

	nb = 0;
	seg = '+';
	seg = n < 0 ? '-' : '+';
	n = n < 0 ? -n : n;
	i = n;
	while (n /= 10)
		nb++;
	if (seg == '-')
		nb += 2;
	else
		nb += 1;
	if (!(str = ft_strnew(nb)))
		return (NULL);
	str[--nb] = (i % 10) + '0';
	while (i /= 10)
		str[--nb] = i % 10 + '0';
	if (seg == '-')
		str[0] = '-';
	return (str);
}
