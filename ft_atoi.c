/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:26:09 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/08 20:58:22 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_trinary(bool check, int t, int f)
{
	if (check)
		return (t);
	return (f);
}

int	ft_atoi(const char *nptr)
{
	unsigned long long	number;
	int					sign;
	int					i;
	int					n;

	i = 0;
	sign = 1;
	number = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
		if (nptr[i++] == '-')
			sign = -1;
	n = i;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		number = number * 10 + (nptr[i++] - 48);
	if ((i - n) == 19)
		if ((sign == 1 && number > (unsigned long long)9223372036854775807)
			|| (sign == -1
				&& number - 1 > (unsigned long long)9223372036854775807))
			i++;
	if ((i - n) > 19)
		return (ft_trinary(sign < 0, 0, -1));
	return (((int)number) * sign);
}
