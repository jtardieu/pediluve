/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 17:58:28 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/03 17:58:28 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n);

//int	main()
//{
//	ft_is_negative(-2);
//}

void	ft_is_negative(int n)
{
	if (n <= 1)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}
