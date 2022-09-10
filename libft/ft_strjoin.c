/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:05:26 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 10:53:16 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fraiche;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	if (!(fraiche = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	ft_strncpy(fraiche, s1, ft_strlen(s1));
	ft_strlcat(fraiche, (char *)s2, (ft_strlen(s2) + ft_strlen(s1) + 1));
	return (fraiche);
}
