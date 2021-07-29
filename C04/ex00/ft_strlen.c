int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strlen("this is a string"));
// }