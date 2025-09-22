/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:05:23 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/22 15:04:33 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int ac, char **av)
{
	int	i;
	int	a;

	i = ac;
	while (i-- != 1)
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
