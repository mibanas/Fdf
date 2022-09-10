/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   projection.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:03:09 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:09 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

t_vec2	projection(int x, int y, t_map *map)
{
	t_vec2	v;
	float	z;
	float	prev_x;
	float	prev_y;

	prev_x = x * map->zoom;
	prev_y = y * map->zoom;
	z = map->tableau[y][x] * map->zoom * map->z_zome;
	if (map->projection == 1)
	{
		v.x = (prev_x - prev_y) * cos(0.523599);
		v.y = -z + (prev_x + prev_y) * sin(0.523599);
	}
	else
	{
		v.x = prev_x;
		v.y = -prev_y;
	}
	return (v);
}
