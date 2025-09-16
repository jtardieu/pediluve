/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 22:58:31 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/16 23:13:47 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_factorial(int nb);
int ft_atoi(char *str);

int main(int ac ,char **av)
{
	int chien = 0;
	if (ac >=2)
		chien = ft_iterative_factorial(ft_atoi(av[ 1 ]));

	printf("%d chien %d ",ac ,chien);
}

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

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	sign;

	sign = 1;
	nb = 0;
	i = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb * sign);
}