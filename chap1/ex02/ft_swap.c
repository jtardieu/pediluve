/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 11:56:45 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/05 12:03:11 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_swap(int *a, int *b);
/*
int main()
{
	int a = 1;
	int b = 2;
	int *c = &a;
	int *d = &b;
	ft_swap(c ,d);
	printf("a = %d b = %d \n",a,b);
}
*/

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
