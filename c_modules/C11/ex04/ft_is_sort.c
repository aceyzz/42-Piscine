/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:27:02 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/20 13:12:43 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cr;
	int	decr;

	i = 0;
	cr = 1;
	decr = 1;
	if (length == 1 || length == 0)
		return (1);
	while (i < length)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			decr++;
		else if (f(tab[i], tab[i + 1] < 0))
			cr++;
		else if (f(tab[i], tab[i + 1] == 0))
		{
			decr++;
			cr++;
		}
		i++;
	}
	if (decr >= length || cr >= length)
		return (1);
	return (0);
}
