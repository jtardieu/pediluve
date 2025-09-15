/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:22:33 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/12 00:22:33 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strstr(char *str, char *to_find);

int main()
{
	char manger[] = "test de grand mort activer";
	char *trouver="mort";
	printf("manger = \t%s\natouver = \t%s\n",manger,trouver);
	char *find = ft_strstr(manger,trouver);
	printf("trouver = \t%s\n",find);
}
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	bool;

	i = -1;
	while (str[++i])
	{
		j = 0;
		bool = 1;
		while (to_find[j])
		{
			if (str[i + j] != to_find[j])
			{
				bool = 0;
				break ;
			}
			j++;
		}
		if (bool)
			return (str + i);
	}
	return (0);
}
