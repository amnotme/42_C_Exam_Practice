//#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int temp;

	temp = 0;
	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			i = 0;
		
		}
		else
			i++;
	}
}
/*
int		main(void)
{
	int tab[10] = {-1, 5, -10, -10, 9, 8, 2, 4, 3, -7}; 
	int i;

	i = 0;
	printf("before sort -> ");
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	i = 0;
	sort_int_tab(tab, 10);
	printf("after sort -> ");
	while (i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
	return (0);

}
*/
