/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luflores <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:13:18 by luflores          #+#    #+#             */
/*   Updated: 2025/09/08 18:13:24 by luflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (96 < str[i] && 123 > str[i])
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char strb[7] = "aznjour";
// 	ft_strupcase(&strb[0]);
// 	int i = 0;

// 	while (strb[i] != '\0')
// 	{
// 	write(1,&strb[i],1);
// 	i++;
// 	}
// }