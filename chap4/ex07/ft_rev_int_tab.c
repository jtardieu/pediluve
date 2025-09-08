/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 17:25:45 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/08 17:25:50 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

int main()
{
	int taille = 10;
	int tab[taille];
	int i =0; 
	while (i!=taille)
	{
		tab[i]=i;
		i++;
	}

	ft_rev_int_tab(tab,taille);

	int j =0;

	while (j<=taille)
	{printf("la %d",taille);
		printf("num %d = %d \n",j,tab[j]);
		j++;
	}
	
}
void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int tamp;

	i = 0;
	while(i!=size)
	{
		ft_swap(&tab[i],&tab[ size - i]);
	
		i++;
	}
}

void	ft_swap(int *a, int *b)
{
	int	c;
	
	c = *a;
	*a = *b;
	*b = c;
}
