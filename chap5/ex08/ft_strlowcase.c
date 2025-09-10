/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luflores <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 19:04:44 by luflores          #+#    #+#             */
/*   Updated: 2025/09/08 19:04:47 by luflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (64 < str[i] && 91 > str[i])
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

// int main(void)
// {
// 	char strb[7] = "bonJOUR";
// 	ft_strlowcase(&strb[0]);
// 	int i = 0;

// 	while (strb[i] != '\0')
// 	{
// 	write(1,&strb[i],1);
// 	i++;
// 	}
// }