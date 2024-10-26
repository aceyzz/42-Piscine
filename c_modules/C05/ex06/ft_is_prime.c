/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 10:20:26 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/18 10:25:48 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	prime;

	prime = 2;
	if (nb < 2)
		return (0);
	while (prime <= nb / 2 && prime <= 46341)
	{
		if (nb % prime == 0)
			return (0);
		prime++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main(void)
{
	int	a;

	a = -8;
	while (a < 30)
	{
		if (ft_is_prime(a) == 1)
			printf("YES : \" %d \" est un nombre premier\n", a);
		else
			printf("NO : \" %d \" n'est pas un nombre premier\n", a);
		a++;
	}
	return (0);
}*/
