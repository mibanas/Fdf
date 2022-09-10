/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   windows.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:04:46 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:16:08 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	clean_win(t_map *map)
{
	int	i;
	int	j;

	i = -1;
	while (++i < 1000)
	{
		j = 0;
		while (j < 800)
		{
			mlx_pixel_put(map->mlx_ptr, map->win_ptr, i, j, 0x000000);
			j++;
		}
	}
	mlx_string_put(map->mlx_ptr, map->win_ptr,
			20, 20, 16777215, "utiliser les fleches");
	mlx_string_put(map->mlx_ptr, map->win_ptr,
			20, 40, 16777215, "+ ou - pour le zoome");
	mlx_string_put(map->mlx_ptr, map->win_ptr,
			20, 60, 16777215, "est pour sortir");
	mlx_string_put(map->mlx_ptr, map->win_ptr,
			20, 80, 16777215, "R, W, G, et B pour les couleurs");
	mlx_string_put(map->mlx_ptr, map->win_ptr,
			20, 100, 16777215, "4 et 5 pour zomer z");
	mlx_string_put(map->mlx_ptr, map->win_ptr,
			20, 120, 16777215, "1 et 2 pour la projection");
}

void	draw(t_map *map)
{
	t_map		init;
	t_vec2		v1;
	t_vec2		v2;

	init = *map;
	clean_win(map);
	while (++init.y < init.lignes)
	{
		init.x = 0;
		while (init.x < init.colonnes)
		{
			v1 = projection(init.x, init.y, map);
			if (init.x < init.colonnes - 1)
			{
				v2 = projection((init.x + 1), init.y, map);
				tracer(init, v1, v2);
			}
			if (init.y < init.lignes - 1)
			{
				v2 = projection(init.x, (init.y + 1), map);
				tracer(init, v1, v2);
			}
			init.x++;
		}
	}
}

void	windows(int lignes, int colonnes, int **tableau)
{
	t_map	init;

	init.y = -1;
	init.z_zome = 0.2;
	init.mlx_ptr = mlx_init();
	init.win_ptr = mlx_new_window(init.mlx_ptr, 1000, 800, "fdf1337");
	init.zoom = 20;
	init.u_x = 400;
	init.u_y = 200;
	init.color = 16777215;
	init.tableau = tableau;
	init.lignes = lignes;
	init.colonnes = colonnes;
	init.projection = 1;
	draw(&init);
	mlx_hook(init.win_ptr, KEY_PRESS, 0, bonus, (void *)&init);
	mlx_hook(init.win_ptr, MOUSE_PRESS, 0, ft_close, (void *)&init);
	mlx_loop(init.mlx_ptr);
}
