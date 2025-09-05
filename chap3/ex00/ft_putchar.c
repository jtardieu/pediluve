/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:04:30 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/04 14:53:55 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

/*
int main()
{
	ft_putchar('d');
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
