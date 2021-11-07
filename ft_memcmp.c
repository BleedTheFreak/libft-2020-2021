/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:20:20 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/03 09:46:57 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ptrs1;
	const unsigned char	*ptrs2;
	size_t				i;

	i = 0;
	ptrs1 = s1;
	ptrs2 = s2;
	while (i < n)
	{
		if (ptrs1[i] == ptrs2[i])
			i++;
		else
			return (ptrs1[i] - ptrs2[i]);
	}
	return (0);
}
