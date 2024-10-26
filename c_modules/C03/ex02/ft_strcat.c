/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:24:45 by cedmulle          #+#    #+#             */
/*   Updated: 2023/08/31 12:55:11 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char src[10] = "456";
	char dest1[10] = "123";
	char dest2[10] = "123";

	printf("Fonction perso = %s\n", ft_strcat(dest1, src));
	printf("Fonction originale = %s\n", strcat(dest2, src));
	if (*dest1 == *dest2)
		printf("Fonctions similaires\n");
	else
		printf("Fonctions differentes\n");
	return (0);
}*/
