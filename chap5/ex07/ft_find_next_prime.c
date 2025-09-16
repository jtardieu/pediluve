
int	isprime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0 || nb == 1)
	{
		return (0);
	}
	while (++i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i != 2147483647)
	{
		if (isprime(i) == 1)
		{
			return (i);
		}
		i++;
	}
	return (0);
}
