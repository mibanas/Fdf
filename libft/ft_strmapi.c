/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:02:59 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 10:25:45 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	char		*fraiche;

	if (s == NULL || f == NULL)
		return (NULL);
	if (!(fraiche = ft_strnew(ft_strlen(s))))
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		fraiche[i] = f(i, s[i]);
		i++;
	}
	return (fraiche);
}
