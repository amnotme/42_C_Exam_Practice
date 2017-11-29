char		*ft_strcpy(char *s1, char *s2)
{
	char *ptr;
	int i;

	i = 0;
	ptr = s1;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	s1 = ptr;
	return (s1);
}
