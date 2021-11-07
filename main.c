/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ytaya <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:36:05 by ytaya             #+#    #+#             */
/*   Updated: 2021/11/07 14:54:51 by ytaya            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_bonus.h"
#include <stdio.h>

void	ft_del(void *ptr)
{
	ptr = 0;
}

int main()
{
	//t_list **list;
	t_list *l1 = ft_lstnew("Taya");
	t_list *l2 = ft_lstnew("Yassine");
	t_list *l3 = ft_lstnew("Well Well");
	//list = &l1;
	ft_lstadd_front(&l1,l2);
	ft_lstadd_front(&l2,l3);
	//ft_lstadd_front(list,&l3);	
	//printf("%s\n",l1->content);
	printf("%s\n",l3->content);
	printf("%s\n",l3->next->content);
	printf("%s\n",l3->next->next->content);
	ft_lstclear(&l2,&ft_del);
	l3->next = 0;
	printf("%s\n",l3->content);
	//printf("%p\n",l3->next);
	return (0);
}
