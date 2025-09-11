/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 20:41:40 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/07 20:41:40 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h> 
char	*ft_strncpy(char *dest, char *src, unsigned int n);
/*
int main ()
{
	char trop_bien[99];
	char *chien = "efqeg";
	unsigned int taille = 49 ;
	printf("\n%d: affichage final devrait etre: <<%s>>`\n\n", __LINE__, chien);
	ft_strncpy(trop_bien,chien,taille);
	printf("\n%d: affichage final trop bien\t`%s`\n", __LINE__, trop_bien);
}
*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n )
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}
