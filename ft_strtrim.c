/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:33:34 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/06 20:24:39 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_ischarset(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	ft_getfirst(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (ft_ischarset(s1[i], set) && s1[i])
		i++;
	return (i);
}

static int	ft_getlast(char const *s1, char const *set)
{
	int	n;

	n = ft_strlen(s1) - 1;
	while (ft_ischarset(s1[n], set) && n > 0)
		n--;
	return (n);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		n;
	char	*string;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1)
		return (0);
	i = 0;
	end = ft_getlast(s1, set);
	start = ft_getfirst(s1, set);
	if (end == 0 || start == ft_strlen(s1))
		return (ft_strdup(""));
	n = (end - start) + 2;
	string = (char *) malloc(sizeof(char) * n);
	if (!string)
		return (0);
	while (start <= end)
	{
		string[i] = s1[start];
		i++;
		start++;
	}
	string[i] = '\0';
	return (string);
}
