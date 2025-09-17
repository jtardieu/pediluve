/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:04:02 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/17 15:53:38 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	isprime(int nb);
int	ft_find_next_prime(int nb);

// int main()
// {
// 	int i = 8;
// 	printf("%d",ft_find_next_prime(i));
// }

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
