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

//#include <stdio.h>
int	ft_str_is_printable(char *str);
int	is_printable(char src);

//int main()
//{
//	char *bruh ="esgfseg" ;
//	int rep=ft_str_is_alpha(bruh);

//	if (rep==0)
//		printf("oui\n");
//	else	
//		printf("non\n");
//}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			if (is_printable(str[i]) == 1)
				return (1);
			i++;
		}
		if (str[0] != '\0')
			return (0);
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
