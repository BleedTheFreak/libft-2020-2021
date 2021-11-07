/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 17:43:07 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/07 16:03:07 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*ptrlst;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ptrlst = ft_lstlast(*lst);
	ptrlst->next = new;
}
