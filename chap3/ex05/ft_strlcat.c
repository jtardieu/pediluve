/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtardieu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 17:46:38 by jtardieu          #+#    #+#             */
/*   Updated: 2025/09/15 17:46:40 by jtardieu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlcat(char *dest, char *src);
int		ft_strlen(char *str);

// int main()
// {
// 	char bloup[999] = "donne";
// 	char *glouglou = "aboire";
// 	ft_strcat(bloup,glouglou);
// 	printf("%s\n",bloup);
// }
char	ft_strcat(char *dest, char *src)
{
	int	dest_len;
	int	i;

	i = -1;
	dest_len = ft_strlen(dest);
	while (src[++i] != '\0')
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
