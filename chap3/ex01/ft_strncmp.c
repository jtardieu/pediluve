/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:11:30 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:11:30 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n);

// int main()
// {
// 	char chien[] =	"aziaa"; 
// 	char wouf[] =	"zaiaa";
// 	unsigned int taille = 3;
// 	int result;
// 	result = ft_strncmp(wouf,chien,taille);
// 	printf("wouf est\t%s \nchien est\t%s\n",wouf,chien);
// 	printf("result est \t%d",result);
// }
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				j;

	i = -1;
	j = 0;
	while ((s1[++i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return(0);
}
