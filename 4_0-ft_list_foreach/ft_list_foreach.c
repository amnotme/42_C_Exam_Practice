void		ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list  *iterdata;

	iterdata = NULL;
	while (begin_list->next)
	{
		iterdata = begin_list->data;
		f(iterdata);
		begin_list = begin_list->next;
	}
}
