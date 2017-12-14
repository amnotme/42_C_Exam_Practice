#include <stdio.h>

void			ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void			sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i = 0;

	while (i < size - 1)
	{
		if (tab[i + 1] < tab[i])
		{
		   ft_swap(&tab[i + 1], &tab[i]);
		   i = 0;
		}	
		else
			i++;
	}
}

int				main(void)
{
	int size = 8;
	int tab[8] = {67,59,42,4,2,1,0,0};
	int i;

	i = 0;
	while (i < size)
	{
		printf("before tab ->%d\n", tab[i]);
		i++;
	}
	i = 0;
	sort_int_tab(tab, size);
	while (i < size)
	{
		printf("tab ->%d\n", tab[i]);
		i++;
	}
}
