#include <stdlib.h>
#include <stdio.h>

int			pgcd(int arg1, int arg2)
{
	int ret;
	int divisor;

	ret = 0;
	if (arg1 >= arg2)
		divisor = arg2;
	else
		divisor = arg1;

	while (ret == 0)
	{
		if ((arg1 % divisor == 0) && (arg2 % divisor == 0))
			ret = divisor;
		else
			divisor--;
	}
	ret = divisor;
	return (ret);
}


int			main(int argc, char **argv)
{
	if (argc != 3)
		printf("\n");
	else
		printf("%d\n", pgcd(atoi(argv[1]), atoi(argv[2])));
	return (0);
}
