/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:15:14 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:15:14 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strcat(char *dest, char *src);
int strlen(char *str);

int main()
{
	char bloup[99];
	char *glouglou = "aboire";
	ft_strcat(bloup,glouglou);
}
char *ft_strcat(char *dest, char *src)
{
	size_t dest_len = strlen(dest);
	size_t i;

	i = -1;
	while(src[i++] != '\0')
		dest[dest_len + i] = src[i]

	dest[dest_len + i] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int i;

	i = -1;
	while(str[++i])
	{
	}
	return (i);
}
