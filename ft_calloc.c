/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:23:55 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 16:03:56 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*callocptr;
	size_t			i;

	i = 0;
	callocptr = malloc(size * count);
	if (!callocptr)
		return (0);
	while (i < count * size)
		callocptr[i++] = 0;
	return ((void *) callocptr);
}
