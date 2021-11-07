/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:57:31 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 16:08:42 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*ret;

	len = 0;
	while (s1[len])
		len++;
	ret = malloc(sizeof(char) * (len + 1));
	if (ret)
	{
		i = 0;
		while (s1[i])
		{
			ret[i] = s1[i];
			i++;
		}
		ret[i] = '\0';
	}
	return (ret);
}
