/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:07:18 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/07 16:19:56 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const unsigned char	*ptrsrc;
	unsigned char		*ptrdest;
	size_t				i;

	if (!dst && !src)
		return (0);
	ptrsrc = src;
	ptrdest = dst;
	if (!(*ptrdest) && !(*ptrsrc))
		return ("");
	i = 0;
	while (i < n)
	{
		ptrdest[i] = ptrsrc[i];
		i++;
	}
	return (dst);
}
