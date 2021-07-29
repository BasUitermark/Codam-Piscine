int	ft_atoi(char *str)
{
	int	i;
	int	minuscount;
	int	num;

	i = 0;
	minuscount = 0;
	num = 0;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] != '\0' && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			minuscount++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	if (minuscount % 2 == 1)
		num = (-1 * num);
	return (num);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char a[] = "      -++-0cvzxcvz";
// 	printf("%d", ft_atoi(a));
// }