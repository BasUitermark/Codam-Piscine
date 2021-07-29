#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (*src != '\0')
	{
		dest[count] = *src;
		count++;
		src++;
	}
	dest[count] = '\0';
	return (dest);
}

int	main(void)
{
	char	store[];

	ft_strcpy(store, "one two");
	printf("%s", store);
}
