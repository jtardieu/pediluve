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

#include<stdio.h>

int ft_strcmp(char *s1, char *s2);

int main()
{
	char chien[]="chiea"; 
	char wouf[]="chiez";
	int result;
	result = ft_strcmp(wouf,chien);

	printf("wouf est\t%s \nchien est\t%s\n",wouf,chien);
	printf("result est \t%d",result);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[++i] || s2[i])
	{
		if(s1[i] != s2[i])
		{
			return (j = s1[i] + s2[i]);
		}
	}
}
