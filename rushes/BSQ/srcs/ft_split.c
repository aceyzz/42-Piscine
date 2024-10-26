/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 10:39:11 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/19 15:27:12 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

int	is_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !is_sep(str[i], charset))
		i++;
	return (i);
}

int	wordcount(char *str, char *charset)
{
	int	count;
	int	i;
	int	len;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		if (str[i])
		{
			count++;
			len = wordlen(str + i, charset);
			i += len;
		}
	}
	return (count);
}

char	*ft_strdup_w_size(char *src, int size)
{
	int		i;
	char	*dest;

	dest = (char *)malloc(sizeof(char) * (size + 1));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[size] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		size;
	char	**dest;
	int		i;
	int		k;
	int		j;

	i = 0;
	k = 0;
	size = wordcount(str, charset);
	dest = (char **)malloc(sizeof(char *) * (size + 1));
	if (!dest)
		return (NULL);
	while (i < size)
	{
		while (str[k] && is_sep(str[k], charset))
			k++;
		if (!str[k])
			break ;
		j = wordlen(str + k, charset);
		dest[i] = ft_strdup_w_size(str + k, j);
		k += j;
		i++;
	}
	dest[size] = NULL;
	return (dest);
}
