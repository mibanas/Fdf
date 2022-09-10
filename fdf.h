/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:05:05 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:17:50 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include <fcntl.h>
# include "./libft/libft.h"
# include <mlx.h>
# include <math.h>
# include <stdio.h>

# define BUFF_SIZE 4000
# define KEY_PRESS 2
# define MOUSE_PRESS 17
# define PLUS_BTN 69
# define MINUS_BTN 78
# define TOP 126
# define DOWN 125
# define RIGHT 124
# define LEFT 123
# define RED 15
# define BLUE 11
# define WHITE 13
# define GREEN 5
# define ZOME_IN 86
# define ZOME_OUT 87

typedef	struct		s_map
{
	char	*mlx_ptr;
	char	*win_ptr;
	int		zoom;
	int		**tableau;
	int		lignes;
	int		colonnes;
	int		u_x;
	int		u_y;
	int		color;
	int		x;
	int		y;
	int		z;
	int		projection;
	float	z_zome;
}					t_map;

typedef struct		s_vec2
{
	float	x;
	float	y;
}					t_vec2;

typedef struct		s_pt
{
	int		x_1;
	int		x_2;
	int		y_1;
	int		y_2;
}					t_pt;

typedef	struct		s_point
{
	int		x;
	int		y;
	int		dx;
	int		dy;
	int		xincr;
	int		yincr;
	int		erreur;
	int		i;
}					t_point;

int					get_next_line(const	int fd, char **line);
void				windows(int lignes, int colonnes, int **tableau);
void				pixel(int x, int y, t_map couple);
t_vec2				projection(int x, int y, t_map *map);
void				line(t_map ptr, t_pt p);
void				tracer(t_map init, t_vec2 v1, t_vec2 v2);
void				draw(t_map *map);
int					bonus(int keycode, void *param);
void				zoom_in(int keycode, t_map *map);
void				deplacement(int keycode, t_map *map);
int					ft_close(void *param);
int					ft_close1(void *param);
int					ft_close(void *param);

#endif
