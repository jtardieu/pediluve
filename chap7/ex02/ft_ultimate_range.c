/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:19:56 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/23 15:13:18 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max);

int main(int ac, char **av)
{
	int i = -1;
	int *tab;
	int taille;
	(void) ac;


	taille = ft_ultimate_range(&tab, atoi(av[1]), atoi(av[2]));

	printf("%d\n\n", taille);

	while(++i != taille)
		printf("%d\n",tab[i]);

	free (tab);
}

int ft_ultimate_range(int **range, int min, int max)
{
	if ((max-min) <= 0)
		return -1;
	if ((max == min) || range == NULL)
		return 0;

	range[0] = malloc(sizeof(int)*(max - min));
	int i = -1;

	while (++i != (max - min))
		range[0][i]= min + i;

	return i;
}
