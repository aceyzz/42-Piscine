/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:38:31 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/05 19:48:03 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	sizedest;
	unsigned int	sizesrc;
	unsigned int	i;

	sizedest = ft_strlen(dest);
	sizesrc = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (sizesrc);
	while (src[i] && (sizedest + i < (size - 1)))
	{
		dest[i + sizedest] = src[i];
		i++;
	}
	if (i < size)
		dest[i + sizedest] = '\0';
	if (sizedest > size)
		return (sizesrc + size);
	return (sizedest + sizesrc);
}
