/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 10:14:01 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/17 12:25:25 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_tab(char *tab[], int size)
{
	int		i;
	int		k;
	char	*tmp;

	i = 1;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (ft_strcmp(tab[k], tab[i]) < 0)
			{
				tmp = tab[i];
				tab[i] = tab[k];
				tab[k] = tmp;
			}
			k++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	ft_sort_tab(argv, argc);
	while (i <= argc - 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}