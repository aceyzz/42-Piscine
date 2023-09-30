/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 17:01:55 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/05 17:46:31 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = 0;
	while (i < size - 1)
	{
		while (tab[i] > tab[i + 1])
		{
			tmp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
}
/*
int	main(void)
{
	int	tab[5] = {3, 8, 2, 6, -56};
	int	i = 0;
	while (i < 5)
	{
		printf("%d /", tab[i]);
		i++;
	}
	printf("\nAPRES FONCTION\n");
	ft_sort_int_tab(tab, 6);
	i = 0;
	while (i < 5)
	{
		printf("%d /", tab[i]);
		i++;
	}
	return (0);
}*/
