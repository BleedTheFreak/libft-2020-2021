/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:30:57 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/07 13:32:51 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ptrlst;

	if (lst == NULL)
		return (lst);
	ptrlst = lst;
	while (ptrlst->next)
		ptrlst = ptrlst->next;
	return (ptrlst);
}
