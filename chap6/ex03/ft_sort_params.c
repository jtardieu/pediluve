/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:25:43 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/22 15:11:16 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(char **tab, int size);
void	ft_swap(char **a, char **b);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);

int	main(int ac, char **av)
{
	int	i;
	int	a;

	i = 0;
	ft_sort_int_tab(av + 1, ac - 1);
	while (++i < ac)
	{
		a = ft_strlen(av[i]);
		write (1, av[i], a);
		write (1, "\n", 1);
	}
}

void	ft_sort_int_tab(char **tab, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
	{
		if (ft_strcmp(tab[i], tab[i + 1]) > 0)
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *a;
	*a = *b;
	*b = c;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s1[++i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}
