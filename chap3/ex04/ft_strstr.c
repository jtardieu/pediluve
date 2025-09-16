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

// #include <stdio.h>
char	*ft_strstr(char *str, char *to_find);
int		isthathat(int i, char *str, char *to_find);

// int main(int argc, char **argv)
// {
// 	char *trouver;
// 	if (argc == 2)
// 		trouver = argv[1];
// 	char manger[] = "test de grand mort activer";
// 	printf("manger = \t%s\natouver = \t%s\n",manger,trouver);
// 	char *find = ft_strstr(manger,trouver);
// 	printf("trouver = \t%s\n",find);
// }
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	bool;

	i = -1;
	if (to_find[0] == 0)
	{
		return (str);
	}
	while (str[++i])
	{
		bool = isthathat(i, str, to_find);
		if (bool == 1)
			return (str + i);
	}
	return (0);
}

int	isthathat(int i, char *str, char *to_find)
{
	int	j;

	j = 0;
	while (to_find[j])
	{
		if (str[i + j] != to_find[j])
		{
			return (0);
		}
		j++;
	}
	return (1);
}
