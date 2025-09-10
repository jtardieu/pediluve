/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 23:54:57 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/09 23:54:57 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_str_is_numeric(char *str);
int	is_numeric(char src);

//int main()
//{
//	char *bruh ;
//	int rep=ft_str_is_numeric(bruh);

//	if (rep==0)
//		printf("oui\n");
//	else	
//		printf("non\n");
//}
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (is_numeric(str[i]) == 1)
				return (1);
			i++;
		}
		if (str[0] != '\0')
			return (0);
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
