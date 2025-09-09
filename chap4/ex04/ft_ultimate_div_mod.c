/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:32:55 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/05 12:33:01 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b);
/*
int main()
{

	int a = 21;
	int b = 21;
	printf("%d / %d",a,b);

	ft_ultimate_div_mod(&a,&b);
	printf("= %d on modulo est %d",a,b);
}
*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
