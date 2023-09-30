/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:57:53 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/02 18:49:20 by kivkovic         ###   ########.fr       */
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
		if ((i == x && k == y && i != 1) || (i == 1 && k == y))
			ft_putchar('A');
		else if ((i == 1 && k == 1 && y != 1) || (i == x && k == 1 && x != 1))
			ft_putchar('C');
		else if ((i == 1 || i == x) || (k == 1 || k == y))
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
