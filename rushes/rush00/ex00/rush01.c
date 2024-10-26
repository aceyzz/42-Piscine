/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kivkovic <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:49:07 by kivkovic          #+#    #+#             */
/*   Updated: 2023/09/02 18:55:16 by fsan-vic         ###   ########.fr       */
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
			ft_putchar('\\');
		else if ((i == 1 && k == y) || (i == x && k == 1 && x != 1))
			ft_putchar('/');
		else if (i == 1 || i == x || k == 1 || k == y)
			ft_putchar('*');
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
