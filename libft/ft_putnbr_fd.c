/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msanabi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/29 22:13:07 by msanabi           #+#    #+#             */
/*   Updated: 2018/10/29 22:14:43 by msanabi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		number = -1 * n;
		ft_putchar_fd('-', fd);
	}
	else
		number = n;
	if (number > 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + 48, fd);
}
