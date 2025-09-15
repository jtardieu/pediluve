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

// #include <stdio.h>
int	ft_str_is_lowercase(char *str);
int	is_numeric(char src);

// int main()
// {
// 	char *bruh ="kiskj45gbj";
// 	int rep=ft_str_is_lowercase(bruh);
// 	if (rep==0)
// 		printf("non %d\n",rep);
// 	else	
// 		printf("oui %d\n",rep);
// }
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	is_numeric(char src)
{
	if ((src <= '9' && src >= '0'))
	{
		return (0);
	}
	else
		return (1);
}
