#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if ((*str < '0' || *str > '9'))
			return ('0');
		str++;
	}
	return ('1');
}

int	main(void)
{
	char	write;

	write = ft_str_is_numeric("24");
	printf("%c", write);
}
