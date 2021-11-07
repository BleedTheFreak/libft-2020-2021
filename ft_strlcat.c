/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:50:18 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/03 13:21:19 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	i = 0;
	dstlen = 0;
	srclen = 0;
	while (src[srclen])
		srclen++;
	while (dst[dstlen])
		dstlen++;
	if (dstsize == 0)
		return (srclen);
	while (src[i] && dstlen + i < dstsize - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	if (dstsize < dstlen)
		return (srclen + dstsize);
	return (dstlen + srclen);
}
