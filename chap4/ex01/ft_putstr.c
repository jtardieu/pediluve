/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:44:20 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:44:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);
int		ft_strlen(char *str);

// int main(int argc , char **argv)
// {
// 	argc = 1;
// 	char *chien= *argv[1];
// 	ft_putstr(chien);
// }
void	ft_putstr(char *str)
{
	int	i;

	i = ft_strlen(str);
	write (1, str, i);
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
