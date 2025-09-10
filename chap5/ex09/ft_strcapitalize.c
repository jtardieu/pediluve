/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luflores <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 10:51:09 by luflores          #+#    #+#             */
/*   Updated: 2025/09/09 10:51:13 by luflores         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

int	wat(char a)
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
			if (wat(str[i]) == 1)
				str[i] -= 32;
		}
		if (type == 2 || type == 1 || type == 0)
		{
			if (wat(str[i]) == 0)
				str[i] += 32;
		}
		type = wat(str[i]);
	}
	return (str);
}

// int main(void)
// {
// 	char strb[] = "ordre de. fou furax a 8t+eAf";
// 	ft_strcapitalize(&strb[0]);
// 	int i = 0;

// 	while (strb[i] != '\0')
// 	{
// 	write(1,&strb[i],1);
// 	i++;
// 	}
// }