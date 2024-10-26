/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 15:22:54 by cedmulle          #+#    #+#             */
/*   Updated: 2023/08/31 11:45:11 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(int argc, char *argv[])
{
	unsigned int	n = 5;
	if (argc != 3)
	{
		printf("Mauvais nombre d'argments\n");
		return (0);
	}
	printf("Fonction perso = %d\n", ft_strncmp(argv[1], argv[2], n));
	printf("Fonction originale = %d\n", strncmp(argv[1], argv[2], n));
	if (ft_strncmp(argv[1], argv[2], n) == strncmp(argv[1], argv[2], n))
		printf("Les fonctions sont identiques\n");
	else
		printf("Les fonctions sont differentes\n");
	return (0);
}*/
