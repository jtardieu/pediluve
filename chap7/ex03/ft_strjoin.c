/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/19 12:20:04 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/23 17:54:51 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char **src);
char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);

int main(int ac , char **av)
{
	(void) ac;
	char *str = ft_strjoin(ac-1 , av+3 , av[1]);

	printf("\n -%s-\n",str);

	free (str);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	char *enovoie ;

	enovoie = malloc(sizeof(char)*500);
	int i = -1;
	int j = 0;
	if(size == 0)
	{
	 	return  "";
	}

	enovoie = ft_strcat(enovoie , &strs[i++]);
	while (++j != size-1 )
		{
			enovoie = ft_strcat(enovoie , &sep);
			enovoie = ft_strcat(enovoie , &strs[i++]);
			printf("\n%s\n",enovoie);
		}
	return enovoie;
}

char	*ft_strcat(char *dest, char **src)
{
	int	i;
	int strt;
	int tdest;

	strt = ft_strlen(src[0]);
	tdest = ft_strlen(dest);

	printf("strt %d,tdest %d\n",strt,tdest);

	if (strt>tdest)
		strt = tdest;

	i = -1;
	while (src[0][++i] != '\0')
		dest[tdest + i] = src[0][i];
	dest[strt + i] = '\0';

	//printf("\ntaille %d\n la %s  a ajout %s",strt,dest,src[0]);

	return (dest);
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
