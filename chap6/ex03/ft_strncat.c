/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:19:06 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:19:06 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb);
int ft_strlen(char *str);

int main()
{
	char bloup[]="aboire";
	char *glouglou = "aboire";
	unsigned int combien = 6;
	ft_strcat(bloup,glouglou,combien);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	size_t dest_len = strlen(dest);
	size_t i;

	i = -1;
	while(++i < nb && src[i] != '\0')
		dest[dest_len + i] = src[i];

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
