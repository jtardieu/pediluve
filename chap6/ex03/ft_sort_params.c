/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:25:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/18 16:26:52 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_sort_int_tab(char *tab, int size);
void	ft_swap(char *a, char *b);
int		ft_strcmp(char *s1, char *s2);


int main(int ac ,char **av)
{
	int taille = 15;
	// ft_sort_int_tab(av, ac);

	int i=1;
	int j=0;
	ft_swap(av[i],av[i+1]);
	while (av[i][j])
	{
		printf("%c",av[i][j]);
		j++;
	}
}


int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	j;

	i = -1;
	while (s1[++i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (1);
		}
	}
	return (0);
}

char	ft_sort_int_tab(char *tab, int size)
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
	return(0);
}

void	ft_swap(char *a, char *b)
{
	char	*c;

	*c = *a;
	*a = *b;
	*b = *c;
}
