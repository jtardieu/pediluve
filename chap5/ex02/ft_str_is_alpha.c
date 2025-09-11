/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 23:25:56 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/07 23:25:56 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_alpha(char *str);
int	is_alpha(char src);

// int main()
// {
// 	char *bruh ="esgfsADg" ;
// 	int rep=ft_str_is_alpha(bruh);
// 	if (rep==0)
// 		printf("non %d\n",rep);
// 	else	
// 		printf("oui %d\n",rep);
// }
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_alpha(str[i]) == 1)
			return (0);
		i++;
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
