#include <stdlib.h>

int				ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char 			*ft_strdup(char *src)
{
	char *ptr;
	char *str2;
	int i;
	int l;

	i = 0;
	l = ft_strlen(src);
	if (!(str2 = (char *)malloc(sizeof(char) * (l + 1))))
		return (NULL);
	ptr = str2;
	while (src[i])
	{
		str2[i] = src[i];
		i++;
	}
	str2[i] = '\0';
	str2 = ptr;
	return (str2);
}
