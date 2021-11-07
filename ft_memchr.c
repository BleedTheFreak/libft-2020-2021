/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:48:39 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 20:12:40 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptrs;
	size_t			i;

	ptrs = (unsigned char *) s;
	i = 0;
	while (n--)
	{
		if (ptrs[i] == (unsigned char) c)
			return (&ptrs[i]);
		i++;
	}
	return (0);
}
