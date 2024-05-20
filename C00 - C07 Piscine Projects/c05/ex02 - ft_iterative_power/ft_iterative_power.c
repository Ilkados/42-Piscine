int	ft_iterative_power(int base, int power)
{
	int	i;

	i = base;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		base *= i;
		power--;
	}
	return (base);
}
/*
#include <stdio.h>

int main(void)
{
	printf("%i", ft_iterative_power(3, 4 ));
}
*/
