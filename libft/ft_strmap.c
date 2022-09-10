/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:00:26 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 10:18:16 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		i;
	char		*fraiche;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(fraiche = malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		fraiche[i] = f(s[i]);
		i++;
	}
	fraiche[i] = '\0';
	return (fraiche);
}
