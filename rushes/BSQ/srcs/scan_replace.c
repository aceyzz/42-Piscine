/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scan_replace.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:32:09 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/20 20:21:33 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int	obstacle_check(char **tableau, int x, int y, int size, char corner)
{
	int	xx;
	int	yy;

	xx = x;
	yy = y;
	while (y < (size + yy))
	{
		while (x < (size + xx))
		{
			if (tableau[y][x] == corner)
				return (1);
			x++;
		}
		x = xx;
		y++;
	}
	return (0);
}

void	to_replace(char **tab, int x, int y, int size, struct t_charac ch)
{
	int	xx;
	int	yy;

	xx = x;
	yy = y;
	while (y < (size + yy))
	{
		while (x < size + xx)
		{
			if (tab[y][x] == ch.background)
				tab[y][x] = ch.filler;
			x++;
		}
		x = xx;
		y++;
	}
}

int	check_errors(int argc, char **argv)
{
	if (argc != 2 || !(argv[1]))
		return (0);
	else
		return (1);
}

int	size_carre(int hauteur, int longueur)
{
	if (longueur < hauteur)
		return (longueur);
	else
		return (hauteur);
}

void	scan_and_replace(char **tableau, struct t_mesures dim, struct t_charac chs)
{
    int i;
    int x;
    int y;
	int	size;

    x = 0;
    y = 0;
    i = 0;
	size = size_carre(dim.larg_line, dim.long_line);
	while (size >= 0)
	{
		while (y + size <= dim.larg_line)
		{
    	    while (x + size <= dim.long_line)
    	    {
    	        if (obstacle_check(tableau, x, y, size, chs.corner) == 0)
    	        {
    	            to_replace(tableau, x, y, size, chs);
        	        i = 0;
        	        while (i < dim.larg_line)
        	        {
        	            ft_putstr(tableau[i]);
        	            i++;
        	        }
					return ;
        	    }
        	    x++;
       		}
    		x = 0;
       		y++;
   		}
		size--;
		y = 0;
		x = 0;
	}
}
