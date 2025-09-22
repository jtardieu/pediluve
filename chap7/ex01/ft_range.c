/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:19:50 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/22 19:08:38 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int min, int max);

int main(int ac, char **av)
{
	int i = 0;
	int *tab;
	int taille;
	taille = av[2] - av[1];
	tab = ft_range(av[1],av[2]);

	while(i++ != taille)
		printf("&d",tab[i]);
}

int *ft_range(int min, int max)
{
	
}

