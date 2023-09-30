/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 13:44:51 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/20 20:10:40 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_utils.h"

void	continue_main(char *str)
{
	t_charac	chs;
	t_mesures	tab_dim;
	char		**td;

	tab_dim = whats_the_len(str);
	td = recup_table(str);
	chs = charac_to_struct(str);
	scan_and_replace(td, tab_dim, chs);
}

int	main(int argc, char *argv[])
{
	char		*contenu;
	char		*f_cont;
	int			f_id;

	(void)argc;
	contenu = (char *)malloc(sizeof(char) * 1000000);
	f_id = open(argv[1], O_RDONLY);
	if (!contenu || f_id < 0)
		return (0);
	read(f_id, contenu, 1000000);
	f_cont = ft_strdup(contenu);
	free(contenu);
	close(f_id);
	continue_main(f_cont);
	return (0);
}
