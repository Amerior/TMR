/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdu <sdu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:43:15 by sdu               #+#    #+#             */
/*   Updated: 2024/11/15 12:06:14 by sdu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	print_fd(long nb, int fd)
{
	if (nb / 10)
	{
		print_nb(nb / 10, fd);
		print_nb(nb % 10, fd);
	}
	ft_putchar_fd(nb + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	long nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	print_nb(nb, fd);
}