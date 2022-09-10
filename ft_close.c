/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_close.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 15:59:07 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:14 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		ft_close1(void *param)
{
	t_map *map;

	map = (t_map *)param;
	exit(0);
}

int		ft_close(void *param)
{
	t_map *map;

	map = (t_map *)param;
	exit(0);
}
