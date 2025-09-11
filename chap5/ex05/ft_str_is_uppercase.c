/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 00:50:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/10 00:50:57 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_uppercase(char *str);

// int main()
// {
// 	char *bruh ="BItE";
// 	int rep=ft_str_is_uppercase(bruh);
// 	if (rep==0)
// 		printf("non %d\n",rep);
// 	else	
// 		printf("oui %d\n",rep);
// }
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
