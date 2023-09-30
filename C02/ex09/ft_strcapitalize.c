/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:17:40 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/17 16:33:21 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	cond;

	i = 0;
	while (str[i])
	{
		if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
			|| (str[i - 1] >= '0' && str[i - 1] <= '9'))
			cond = 1;
		else
			cond = 0;
		if (str[i] >= 'A' && str[i] <= 'Z' && cond == 1)
			str[i] = str[i] + 32;
		if (str[i] >= 'a' && str[i] <= 'z' && cond == 0)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
