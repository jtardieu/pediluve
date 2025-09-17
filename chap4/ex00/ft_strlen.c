/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:36:12 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:36:12 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_strlen(char *str);

// int main()
// {
// 	char *bloublou = "bloubloublou";
// 	int taille = ft_strlen(bloublou);
// 	printf("bloubl \t%s\ntaille \t%d",bloublou,taille);
// }
int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}
