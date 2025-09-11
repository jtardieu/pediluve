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

// int main()
// {
// 	char *bruh ="biteF";
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
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
