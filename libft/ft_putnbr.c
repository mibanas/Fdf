/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 21:53:05 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/30 10:42:27 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	number;

	if (n < 0)
	{
		number = -1 * n;
		ft_putchar('-');
	}
	else
		number = n;
	if (number >= 10)
		ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
}
