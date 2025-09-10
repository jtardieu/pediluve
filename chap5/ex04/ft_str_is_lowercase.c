/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 00:07:20 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/10 00:07:20 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_lowercase(char *str);
int	ft_str_is_alpha(char *str);
int	is_alpha(char src);

//int main()
//{
//	char *bruh ="bite";
//	int rep=ft_str_is_lowercase(bruh);
//	if (rep==0)
//		printf("oui\n");
//	else	
//		printf("non\n");
//}
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (ft_str_is_alpha(str) == 0)
	{
		while (str[i] != '\0')
		{
			if (str[i] <= 'Z' && str[i] >= 'A')
			{
				return (1);
			}
			i++;
		}
		return (0);
	}
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (is_alpha(str[i]) == 1)
				return (1);
			i++;
		}
		if (str[0] != '\0')
			return (0);
	}
	return (1);
}

int	is_alpha(char src)
{
	if ((src <= 'z' && src >= 'a') || (src <= 'Z' && src >= 'A'))
	{
		return (0);
	}
	else
		return (1);
}
