/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:01:23 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/22 15:02:41 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int ac, char **av)
{
	int	i;
	int	a;

	(void) ac;
	i = 0;
	while (av[++i])
	{
		a = ft_strlen(av[i]);
		write (1, av[i], a);
		write (1, "\n", 1);
	}
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
