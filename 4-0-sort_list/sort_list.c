/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 11:56:13 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 12:21:38 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
/*
#include <stdio.h>
#include <stdlib.h>

int			ascending(int a, int b)
{
	return (a <= b);
}

t_list		*create(int  data)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

void		push(t_list **begin_list, int data)
{
	t_list *temp;

	if (*begin_list)
	{
		temp = *begin_list;
		while (temp->next)
			temp = temp->next;
		temp->next = create(data);	
	}
	else
		*begin_list = create(data);
}

void		print(t_list **list)
{
	t_list  *temp;

	temp = *list;
	while (temp)
	{
		printf("temp-> %d\n", temp->data);
		temp = temp->next;
	}
}
*/
t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *temp;
	int place;

	place = 0;
	temp = lst;
	while (lst->next)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			place = lst->data;
			lst->data = lst->next->data;
			lst->next->data = place;
			lst = temp;
		}
		else
			lst = lst->next;
	}
	lst = temp;
	return (lst);
}
/*
int			main(void)
{
	t_list *list;

	list = NULL;
	int a1 = -1000;
	int a2 = 2;
	int a3 = 3;
	int a4 = 0;
	int a5 = -5000;

	push(&list, a5);
	push(&list, a2);
	push(&list, a4);
	push(&list, a3);
	push(&list, a1);
	print(&list);
	t_list *list2;
	list2 = NULL;
	list2 = sort_list(list, ascending);
	printf("this is the list after sorting ->\n");
	print(&list2);
	printf("compiles\n");
}
*/
