//#include <stdio.h>
//#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	
	unsigned int i;
	unsigned int f;

	i = 1;
	if (a < 1 || b < 1)
		return (0);
	if (a >= b)
		f = b;
	else 
		f = a;	
	while (f > 1)
	{
		if ((a % f == 0) && (b % f == 0))
			break;
		f--;
	}
	return (((a * b)/ f));
}

/*

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("\n");
	else
		printf("lcm -> %d\n", lcm(atoi(argv[1]), atoi(argv[2])));
	return (0);
}

*/
