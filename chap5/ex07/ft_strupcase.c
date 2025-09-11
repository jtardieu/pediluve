/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:39:32 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/11 14:39:44 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
char	*ft_strupcase(char *str);

// int main(void)
// {
// 	char strb[] = "helloworld";
// 	ft_strupcase(&strb[0]);
// 	int i = 0;
// 	while (strb[i] != '\0')
// 	{
// 	write(1,&strb[i],1);
// 	i++;
// 	}
// }

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
