/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:39:28 by cedmulle          #+#    #+#             */
/*   Updated: 2023/08/31 13:11:42 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (to_find[j] && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
	}
	return (0);
}
/*
int		main(void)
{
	char	*str = "Salut les amis";
	char	*to_find = "";
	char	*r1 = ft_strstr(str, to_find);
	char	*r2 = strstr(str, to_find);
	printf("Fonction perso = %s\n", r1);
	printf("Fonction originale = %s\n", r2);
	if (*r1 == *r2)
		printf("Fonctions identiques\n");
	else
		printf("Fonctions differentes\n");
	return (0);
}*/
