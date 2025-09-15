/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 14:43:17 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/11 14:43:21 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int		whatis(char a);
char	*ft_strcapitalize(char *str);

// int main(void)
// {
// 	char strb[] = "hi, how are you? 42words forty-two; fifty+and+one";
// 	ft_strcapitalize(&strb[0]);
// 	int i = 0;
// 	printf("%s",strb);
// }
int	whatis(char a)
{
	if (65 <= a && a <= 90)
		return (0);
	if (97 <= a && a <= 122)
		return (1);
	if (48 <= a && a <= 57)
		return (2);
	return (3);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	type;

	type = 3;
	i = -1;
	while (str[++i] != '\0')
	{
		if (type == 3)
		{
			if (whatis(str[i]) == 1)
				str[i] -= 32;
		}
		if (type == 2 || type == 1 || type == 0)
		{
			if (whatis(str[i]) == 0)
				str[i] += 32;
		}
		type = whatis(str[i]);
	}
	return (str);
}
