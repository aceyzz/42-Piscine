/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:34:51 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/20 20:06:05 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

struct t_mesures	whats_the_len(char *table)
{
	int			hauteur_table;
	int			longueur_table;
	int			i;
	t_mesures	mesures;

	longueur_table = 0;
	hauteur_table = 0;
	i = 0;
	while (table[i] != '\n')
		i++;
	i++;
	while (table[i] != '\n')
	{
		longueur_table++;
		i++;
	}
	while (table[i])
	{
		if (table[i] == '\n')
			hauteur_table++;
		i++;
	}
	mesures.long_line = longueur_table;
	mesures.larg_line = hauteur_table;
	return (mesures);
}

char	**recup_table(char *str)
{
	char	separateur[1];
	char	**tab;
	int		i;

	separateur[0] = '\n';
	i = 0;
	while (str[i] != '\n')
		i++;
	tab = ft_split(str + i, separateur);
	return (tab);
}

struct t_charac	charac_to_struct(char *str)
{
	t_charac	obst_and_fill;
	int			i;

	i = 0;
	while (str[i] != '\n')
		i++;
	i--;
	obst_and_fill.filler = str[i];
	i--;
	obst_and_fill.corner = str[i];
	i--;
	obst_and_fill.background = str[i];
	return (obst_and_fill);
}
