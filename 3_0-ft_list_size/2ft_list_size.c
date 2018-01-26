/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 09:42:25 by exam              #+#    #+#             */
/*   Updated: 2018/01/23 10:10:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
/*
#include <stdio.h>
#include <stdlib.h>

t_list		*create(void *data)
{
	t_list *head;

	head = (t_list *)malloc(sizeof(t_list));
	head->data = data;
	head->next = NULL;
	return (head);
}

void		push(t_list **begin_list, void *data)
{
	t_list *lst;

	lst = NULL;
	if (*begin_list)
	{
		lst = *begin_list;
		while (lst->next)
			lst = lst->next;
		lst->next = create(data);
	}
	else
		*begin_list = create(data);
}

void		print(t_list **begin_list)
{
	t_list *lst;

	lst = *begin_list;
	while (lst)
	{
		printf("lst -> %s\n", lst->data);
		lst = lst->next;
	}
}
*/
int			ft_list_size(t_list *begin_list)
{
	int i;
	t_list *tmp;

	i = 0;
	tmp = (void *)0;
	if (begin_list)
	{
		tmp = begin_list;
		while (tmp)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}
/*
int			main(void)
{
	char *s1 = "what ";
	char *s2 = "is ";
	char *s3 = "this ";
	char *s4 = "shit!";

	t_list *lst;

	lst = NULL;
	push(&lst, s1);
	push(&lst, s2);
	push(&lst, s3);
	push(&lst, s4);
	print(&lst);
	printf("list_size-> %d\n", ft_list_size(lst));
	return (0);
}
*/
