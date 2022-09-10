/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:09:50 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 12:10:11 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*frais;

	if (!(frais = malloc(sizeof(t_list) + 1)))
		return (NULL);
	if (content == NULL)
	{
		frais->content = NULL;
		frais->content_size = 0;
	}
	else
	{
		frais->content = ft_strdup(content);
		frais->content_size = content_size;
	}
	frais->next = NULL;
	return (frais);
}
