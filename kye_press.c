/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   kye_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:05:00 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:10 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	zoom_in(int keycode, t_map *map)
{
	if (keycode == PLUS_BTN)
		map->zoom += 5;
	if (keycode == MINUS_BTN)
		map->zoom -= 5;
	if (keycode == ZOME_IN)
		map->z_zome += 0.1;
	if (keycode == ZOME_OUT)
		map->z_zome -= 0.1;
}

void	deplacement(int keycode, t_map *map)
{
	if (keycode == TOP)
		map->u_y -= 15;
	else if (keycode == DOWN)
		map->u_y += 15;
	else if (keycode == RIGHT)
		map->u_x += 15;
	else if (keycode == LEFT)
		map->u_x -= 15;
}

void	color(int keycode, t_map *map)
{
	if (keycode == RED)
		map->color = 16711680;
	else if (keycode == BLUE)
		map->color = 590079;
	else if (keycode == WHITE)
		map->color = 16777215;
	else if (keycode == GREEN)
		map->color = 458496;
}

int		bonus(int keycode, void *param)
{
	t_map *map;

	map = (t_map *)param;
	if (keycode == PLUS_BTN || keycode == MINUS_BTN ||
			keycode == ZOME_IN || keycode == ZOME_OUT)
		zoom_in(keycode, map);
	if (keycode == TOP || keycode == DOWN
			|| keycode == RIGHT || keycode == LEFT)
		deplacement(keycode, map);
	if (keycode == RED || keycode == BLUE
			|| keycode == WHITE || keycode == GREEN)
		color(keycode, map);
	if (keycode == 83 || keycode == 84)
	{
		if (keycode == 83)
			map->projection = 1;
		else
			map->projection = 2;
	}
	if (keycode == 53)
		ft_close1(map);
	draw(map);
	return (0);
}
