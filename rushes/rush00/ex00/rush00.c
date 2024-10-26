/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:56:42 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/02 17:56:45 by cedmulle         ###   ########.fr       */
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
		if ((i == x && k == y && i != 1) || (i == 1 && k == 1 && y != 1)
			|| ((i == 1 && k == y) || (i == x && k == 1 && x != 1)))
			ft_putchar('o');
		else if (i == 1 || i == x)
			ft_putchar('|');
		else if (k == 1 || k == y)
			ft_putchar('-');
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
