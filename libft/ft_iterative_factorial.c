/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:08:16 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 12:08:35 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iterative_factorial(int nb)
{
	int		factorial;

	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0 || nb > 12)
		return (0);
	factorial = 1;
	while (nb > 1)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
