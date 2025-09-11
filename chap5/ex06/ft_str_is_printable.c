/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 01:00:06 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/10 01:00:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_str_is_printable(char *str);
int	is_printable(char src);

// int main()
// {
// 	char *bruh ="";
// 	int rep=ft_str_is_printable(bruh);
// 	if (rep==0)
// 		printf("non %d\n",rep);
// 	else	
// 		printf("oui %d\n",rep);
// }
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]) == 1)
			return (0);
		i++;
	}
	return (1);
}

int	is_printable(char src)
{
	if (src <= 126 && src >= 33)
	{
		return (0);
	}
	else
		return (1);
}
