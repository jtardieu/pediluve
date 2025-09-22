/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:18:17 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/22 17:43:37 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);

int main (int ac ,char **av)
{
	(void)ac;
	char *con ;

	con = ft_strdup(av[1]);
	printf("1 %s \n2 %s \n",av[1] ,con);
}

char *ft_strdup(char *src)
{
	int taille  = ft_strlen(src);
	char *transfert = malloc(taille*sizeof(char));
	if (transfert== NULL)
		return (0);
	ft_strcpy(transfert , src);

	return (transfert);
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
	}
	return (i);
}


char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
