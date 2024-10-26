/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 10:26:31 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/17 10:26:33 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int lenght, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < lenght)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}
