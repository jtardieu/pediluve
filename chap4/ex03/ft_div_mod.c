/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 12:18:24 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/05 12:19:04 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

// int main()
// {
// 	int div;
// 	int mod;
// 	int a = 21;
// 	int b = 21;
// 	ft_div_mod(a,b,&div,&mod);
// 	printf("%d / %d = %d son modulo est %d",a,b,div,mod);
// }
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
