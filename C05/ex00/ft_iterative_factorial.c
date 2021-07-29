int	ft_iterative_factorial(int nb)
{
	int	num;
	int	temp;

	num = nb;
	temp = nb - 1;
	if (nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	while (temp != 0)
	{
		num = num * temp;
		temp--;
	}
	return (num);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d\n", ft_iterative_factorial(5));
// }