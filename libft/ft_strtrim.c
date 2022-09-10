/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 18:06:21 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 18:18:04 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*strtrim;
	int		len;
	int		i;
	int		j;

	if (!s || !*s || s[0] == '\0')
		return ("\0");
	len = ft_strlen(s);
	len--;
	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	while (len >= i && (s[len] == ' ' || s[len] == '\n' || s[len] == '\t'))
		len--;
	if (!(strtrim = ft_strnew((len - i) + 1)))
		return (NULL);
	j = 0;
	while (i <= len)
	{
		strtrim[j] = s[i++];
		j++;
	}
	strtrim[len + 1] = '\0';
	return (strtrim);
}
