/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 00:02:23 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/17 00:10:11 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_recursive_power(int nb, int power);

int main()
{
	int nombe = 5 ;
	int power = 2 ;

	int a = ft_recursive_power(nombe,power);
	printf("%d wouf \n",a);
}

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return 0;
	if (power == 0)
		return 1;
	return(nb * ft_recursive_power(nb ,power -1));
}
