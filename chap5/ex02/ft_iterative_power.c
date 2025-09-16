/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 23:56:31 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/17 00:02:13 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_iterative_power(int nb, int power);

int main ()
{
	int nombe = 3 ;
	int power = 3 ;

	int a = ft_iterative_power(nombe,power);
	printf("%d wouf \n",a);
}

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
