/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 16:14:23 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/04 10:17:51 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	test;

	test = 1;
	while (test * test <= nb && nb >= 1)
	{
		if ((test * test) == nb)
			return (test);
		if (test >= 46341)
			return (0);
		test++;
	}
	return (0);
}
/*
int	main(void)
{
	int	a;

	a = 2147483647;
	if (ft_sqrt(a) != 0)
	{
		printf("La racine carre de %d est %d.\n", a, ft_sqrt(a));
		printf("C'est un entier, donc OK.\n")
		return (0);
	}
	else
	{
		printf("La racine carre de %d n'est pas un entier.\n. Retour zero", a);
		return (0);
	}
}*/
