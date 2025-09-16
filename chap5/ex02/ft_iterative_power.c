************************************************************************ */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	nbr;

	i = 0;
	nbr = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (++i < power)
	{
		nbr *= nb;
	}
	return (nbr);
}
