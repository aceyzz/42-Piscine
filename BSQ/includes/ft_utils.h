/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cedmulle <cedmulle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 17:47:43 by cedmulle          #+#    #+#             */
/*   Updated: 2023/09/20 19:33:37 by cedmulle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UTILS_H
# define FT_UTILS_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

struct t_mesures;
struct t_charac;

int					obstacle_check(char **tableau, int x, int y, int size, char corner);
int					check_errors(int argc, char **argv);
int					ft_atoi(char *str);
int					ft_strlen(char *str);
char				**ft_split(char *str, char *charset);
char				*extract_table(char *str);
char				*extract_rules(char *str);
char				**recup_table(char *str);
char				*ft_strdup(char *src);
void				ft_putstr(char *str);
void				to_replace(char **tab, int x, int y, int size, struct t_charac ch);
void				scan_and_replace(char **tableau, struct t_mesures dim, struct t_charac chs);
struct t_charac		charac_to_struct(char *str);
struct t_mesures	whats_the_len(char *table);

typedef struct t_mesures
{
	int	long_line;
	int	larg_line;
}		t_mesures;

typedef struct t_charac
{
	char	background;
	char	corner;
	char	filler;
}			t_charac;

#endif
