/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <msanabi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 21:05:10 by msanabi           #+#    #+#             */
/*   Updated: 2019/08/18 16:00:22 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		nb_colonnes(int fd)
{
	char	*line;
	char	**str;
	int		i;

	i = 0;
	get_next_line(fd, &line);
	str = ft_strsplit(line, ' ');
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	return (i);
}

int		**ft_cordonnees(int fd, int colonnes, int lignes)
{
	char	*line;
	char	**str;
	int		**cordonnes;
	int		i;
	int		j;

	i = 0;
	cordonnes = malloc(lignes * sizeof(int *));
	while (i < lignes)
	{
		get_next_line(fd, &line);
		str = ft_strsplit(line, ' ');
		cordonnes[i] = malloc(colonnes * sizeof(int));
		j = 0;
		while (str[j])
		{
			cordonnes[i][j] = ft_atoi(str[j]);
			free(str[j]);
			j++;
		}
		i++;
	}
	return (cordonnes);
}

int		nb_lignes(int fd)
{
	char	*line;
	int		i;

	i = 0;
	while (get_next_line(fd, &line) > 0)
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		lignes;
	int		colonnes;
	int		**cordonnees;

	if (argc != 2)
	{
		ft_putstr("Error\n");
		return (0);
	}
	if ((fd = open(argv[1], O_RDONLY)) == -1)
	{
		ft_putstr("Error\n");
		return (0);
	}
	colonnes = nb_colonnes(fd);
	lignes = nb_lignes(fd) + 1;
	close(fd);
	fd = open(argv[1], O_RDONLY);
	cordonnees = ft_cordonnees(fd, colonnes, lignes);
	windows(lignes, colonnes, cordonnees);
	return (0);
}
