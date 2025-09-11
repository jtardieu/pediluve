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

int main()
{
	char bloup[]="aboire";
	char *glouglou = "aboire";
	unsigned int combien = 6;
	ft_strcat(bloup,glouglou,combien);
}

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	
}
