#include "list.h"

t_list		*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *ptr;
	int temp;
	int flag = 1;
	ptr = lst;
	while (flag == 1)
	{
		if (cmp(lst->data, lst->next.data) == 0)
			
	}
	
	lst = ptr;
	return (lst);
}
