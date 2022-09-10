/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sanabiham.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:04:53 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:06 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	line_x(t_map ptr, t_pt p, t_point li)
{
	li.xincr = (p.x_1 < p.x_2) ? 1 : -1;
	li.yincr = (p.y_1 < p.y_2) ? 1 : -1;
	li.x = p.x_1;
	li.y = p.y_1;
	li.i = -1;
	li.erreur = li.dx / 2;
	while (++li.i < li.dx)
	{
		li.x += li.xincr;
		li.erreur += li.dy;
		if (li.erreur > li.dx)
		{
			li.erreur -= li.dx;
			li.y += li.yincr;
		}
		mlx_pixel_put(ptr.mlx_ptr, ptr.win_ptr, li.x, li.y, ptr.color);
	}
}

void	line_y(t_map ptr, t_pt p, t_point li)
{
	li.xincr = (p.x_1 < p.x_2) ? 1 : -1;
	li.yincr = (p.y_1 < p.y_2) ? 1 : -1;
	li.x = p.x_1;
	li.y = p.y_1;
	li.i = -1;
	li.erreur = li.dy / 2;
	while (++li.i < li.dy)
	{
		li.y += li.yincr;
		li.erreur += li.dx;
		if (li.erreur > li.dy)
		{
			li.erreur -= li.dy;
			li.x += li.xincr;
		}
		mlx_pixel_put(ptr.mlx_ptr, ptr.win_ptr, li.x, li.y, ptr.color);
	}
}

void	line(t_map ptr, t_pt p)
{
	t_point li;

	li.dx = abs(p.x_2 - p.x_1);
	li.dy = abs(p.y_2 - p.y_1);
	if (li.dx > li.dy)
		line_x(ptr, p, li);
	else
		line_y(ptr, p, li);
}
