#include <stdio.h>
#include <stdlib.h>
# define TRUE (1)
# define FALSE (0)

void		fprime(int num)
{
	int i;

	i = 2;
	if (num < 1)
		printf("\n");
	else if (num == 1)
		printf("1\n");
	else if (num == 2147483647)
		printf("%d\n", 2147483647);
	else 
	{
		while (num > 1)
		{
			if ((num % i == 0))
			{
				if (num/i == 1)
					printf("%d\n", i);
				else
					printf("%d*", i);
				num /= i;
			}
			else
				i++;
		}
	}
}

int			main(int argc, char **argv)
{
	if (argc != 2)
		printf("\n");
	else
		fprime(atoi(argv[1]));
	return (0);
}
