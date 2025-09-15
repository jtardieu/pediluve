/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:49:00 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:49:00 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

int main()
{
	int a = 42;
	ft_putnbr(a);
}

void ft_putnbr(int nb)
{
 	char tmp[];
	int parcours;
    if (a < 0) 
	{
        write(1, "-", 1);
    }
    while (a != 0) 
	{
		parcours++
        tmp[] = a % 10 + '0';
 
        write(1, &tmp, 1);
        a /= 10;
    }
}