/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 09:46:53 by exam              #+#    #+#             */
/*   Updated: 2018/01/16 10:19:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

/*
#include <stdio.h>
#include <stdlib.h>
t_list	*create(void *data)
{
	t_list *node;

	node = (t_list *)malloc(sizeof(t_list));
	node->data = data;
	node->next = NULL;
	return (node);
}

void	push(t_list **begin_list, void *data)
{
	t_list *list;

	if (*begin_list)
	{
		list = *begin_list;
		while (list->next)
			list = list->next;
		list->next = create(data);
	}
	else
		*begin_list = create(data);
}

void	print(t_list **list)
{
	t_list  *temp;

	temp = *list;
	while (temp)
	{
		printf("temp->data %s\n", temp->data);
		temp = temp->next;
	}
}
*/
int		ft_list_size(t_list *begin_list)
{
	int i;
	t_list *temp;
	
	i = 0;
	if (begin_list)
	{
		temp = begin_list;
		while (temp)
		{
			temp = temp->next;
			i++;
		}
	}
	else
		return (i);
	return (i);
	
}
/*

int		main(void)
{
	t_list *list;
	char *str = "one";
	char *str2 = "two";
	char *str3 = "three";
	char *str4 = "four";

	list = NULL;
	push(&list, str);
	push(&list, str2);
	push(&list, str3);
	push(&list, str4);
	print(&list);
	printf("ft_list_size-> %d\n", ft_list_size(list));
	return (0);
}
*/
