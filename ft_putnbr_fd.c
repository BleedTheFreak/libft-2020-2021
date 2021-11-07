/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:58:43 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 20:10:15 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	number;

	number = n;
	if (number < 0)
	{
		number *= -1;
		ft_putchar_fd('-', fd);
	}
	if (number >= 10)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putnbr_fd(number % 10, fd);
	}
	else
		ft_putchar_fd(number + 48, fd);
}
