/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 14:25:07 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/07 19:05:37 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdio.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new;
	t_list	*head;
	t_list	*ptrlst;
	t_list *temp;

	if (lst && f && del)
	{
		ptrlst = lst;
		new = ft_lstnew(f(ptrlst->content));
		head = new;
		ptrlst = ptrlst->next;
		while (ptrlst)
		{
			temp = ft_lstnew(f(ptrlst->content)); 
			ft_lstadd_back(&new, temp);
			new = temp;
			ptrlst = ptrlst->next;
		}
		return (head);
	}
	return (0);
}

/*void *addone(void *ptr)
{
	printf("XXXX %d\n", (int) ++ptr);	
	return (ptr);
}
void ffree(void *a)
{
	a = 0;
}

int main()
{
	t_list *lst;
	t_list *lst1;
	t_list *new;

	lst = ft_lstnew((void *)0);
	lst1 = ft_lstnew((void *)10);
	ft_lstadd_back(&lst,lst1);
	printf("DBG0 : %d\n",(int)lst->content);
	printf("DBG1 : %d\n",(int)lst->next->content);
	printf("DBG2 : %d\n", (int)lst->next->next);
	new = ft_lstmap(lst,&addone,&free);
	printf("newlist 0 = %d\n",(int)new->content);
	printf("newlist 1 =%d\n",(int)new->next->content);
}*/

