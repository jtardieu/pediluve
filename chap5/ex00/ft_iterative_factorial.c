
#include <stdio.h>
int	ft_iterative_factorial(int nb);
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	nbr;

	i = 1;
	nbr = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		nbr *= i;
		i++;
	}
	return (nbr);
}
