/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 09:19:05 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 16:37:37 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_numberlen(unsigned int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static void	ft_fill(int len, unsigned int n, char *number, int sign)
{
	number[len--] = '\0';
	while (len >= 0)
	{
		number[len--] = n % 10 + 48;
		n = n / 10;
	}
	if (sign == -1)
		number[0] = '-';
}

char	*ft_itoa(int n)
{
	char			*number;
	int				len;
	unsigned int	nbr;
	int				sign;

	sign = 1;
	if (n < 0)
	{
		nbr = (unsigned int) n * (-1);
		len = ft_numberlen(nbr) + 1;
		sign = -1;
	}
	else
	{
		len = ft_numberlen(n);
		nbr = (unsigned int) n;
	}
	number = (char *) malloc(sizeof(char) * len + 1);
	if (number)
		ft_fill(len, nbr, number, sign);
	return (number);
}
