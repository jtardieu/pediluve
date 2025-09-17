/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 14:03:47 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/17 15:53:39 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_is_prime(int nb);
// int ft_atoi(char *str);

// int main (int ac , char **av )
// {
// 	printf("premier %d\n",ft_is_prime(ft_atoi(av[1])));
// }
int	ft_is_prime(int nb)
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

// int	ft_atoi(char *str)
// {
// 	int	i;
// 	int	nb;
// 	int	sign;

// 	sign = 1;
// 	nb = 0;
// 	i = 0;
// 	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
// 	{
// 		i++;
// 	}
// 	while (str[i] == '-' || str[i] == '+')
// 	{
// 		if (str[i] == '-')
// 			sign *= -1;
// 		i++;
// 	}
// 	while (str[i] >= '0' && str[i] <= '9')
// 	{
// 		nb = nb * 10 + (str[i] - '0');
// 		i++;
// 	}
// 	return (nb * sign);
// }