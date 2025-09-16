/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <jtardieu@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:19:06 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/15 18:40:37 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  #include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb);
int		ft_strlen(char *str);

//  int main()
// {
// 	char bloup[999]="glouglou";
// 	char *glouglou = "aboire";
// 	unsigned int combien = 3;
// 	ft_strncat(bloup,glouglou,combien); 	printf("%s\n",bloup);
//     }

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	i = -1;
	while (++i < nb && src[i] != '\0')
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';
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
