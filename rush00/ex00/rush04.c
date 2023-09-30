/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fsan-vic <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:54:59 by fsan-vic          #+#    #+#             */
/*   Updated: 2023/09/02 18:55:03 by fsan-vic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	k;

	i = 1;
	k = y;
	while (k > 0 && x > 0 && y > 0)
	{
		if ((i == x && k == y && i != 1) || (i == 1 && k == 1 && y != 1))
			ft_putchar('C');
		else if ((i == 1 && k == y) || (i == x && k == 1 && x != 1))
			ft_putchar('A');
		else if (i == 1 || i == x || k == 1 || k == y)
			ft_putchar('B');
		else
			ft_putchar(' ');
		if (i == x)
		{
			ft_putchar('\n');
			i = 1;
			k--;
		}
		else
			i++;
	}
}
/*
k = copie de y mais nom de variable trop long pour la norme

** Rectangle **
BOUCLE LORSQUE TOUTES NOS VARIABLES SONT > A ZERO
1ere condition (1er if) = coin haut/droit et bas/gauche
2eme condition (1er else if) = coin haut/gauche et bas/droit
3eme condition (2e else if) = barres laterales
4eme condition (else suivant) = interieur du rectangle
condition de fin de ligne (if) = retour a la ligne
*/
