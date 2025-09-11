/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:41:36 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/11 14:41:40 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
char	*ft_strlowcase(char *str);

// int main(void)
// {
// 	char strb[7] = "bonJOUR";
// 	ft_strlowcase(&strb[0]);
// 	int i = 0;
// 	printf("%s",strb);
// }
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
