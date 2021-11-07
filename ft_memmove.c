/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 16:32:22 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 11:55:18 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*ptrsrc;
	unsigned char		*ptrdst;

	ptrsrc = src;
	ptrdst = dst;
	if (ptrdst > ptrsrc)
	{
		while (len--)
			ptrdst[len] = ptrsrc[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
