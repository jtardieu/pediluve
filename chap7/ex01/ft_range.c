/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:19:50 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/23 12:59:51 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(int ac, char **av)
{
	int i = -1;
	int *tab;
	int taille;
	
	taille = atoi(av[2]) - atoi(av[1]);
	tab = ft_range(atoi(av[1]), atoi(av[2]));
	
	printf("%d\n\n", taille);
	
	while(++i != taille)
		printf("%d\n",tab[i]);

	free (tab);
}

int *ft_range(int min, int max)
{
	int *tab;
	if ((max-min) <= 0)
		return 0;

	tab = malloc(sizeof(int)*(max - min));
	int i = -1;

	while (++i != (max - min))
		tab[i]= min + i;

	return tab;
}
