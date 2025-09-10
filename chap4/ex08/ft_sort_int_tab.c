/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 15:46:50 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/09 15:46:53 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size);
void	ft_swap(int *a, int *b);

// int main()
// {
// 	int taille = 15;
// 	//int tab [] = {456,1,542,23,547,865,45,25,641,2,8,3,54,21,6};
// 	int tab[]= {5,14,12,3,9,10,7,1,15,2,11,13,4,6,8};
// 	ft_sort_int_tab(tab, taille);

// 	int j=0;
// 	while (j<=taille)
// 	{
// 		printf("num %d = %d \n",j,tab[j]);
// 		j++;
// 	}
// }
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = -1;
	while (i++ < size -1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
	}
}

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
