/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:25:07 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/08 12:03:11 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;
	t_list	*ptrlst;
	t_list	*temp;

	if (lst)
	{
		ptrlst = lst;
		new = ft_lstnew(f(ptrlst->content));
		head = new;
		ptrlst = ptrlst->next;
		while (ptrlst)
		{
			temp = ft_lstnew(f(ptrlst->content));
			if (!temp)
				ft_lstclear(&head, del);
			ft_lstadd_back(&new, temp);
			new = temp;
			ptrlst = ptrlst->next;
		}
		return (head);
	}
	return (0);
}
