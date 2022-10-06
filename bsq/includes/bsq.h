/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:59:21 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 16:59:24 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# define BUF_SIZE 4096

typedef struct s_tab
{
	int		**map;
	int		nb_line;
	int		nb_column;
	char	cel[4];
}			t_tab;

typedef struct s_memo
{
	int	line;
	int	column;
	int	value;
}				t_memo;

void	ft_putchar(char c);

void	ft_putstr(char *s);

void	ft_putstr_nl(char *s);

void	ft_putnbr(long n);

void	ft_puterror(void);

int		ft_atoi(char *s, int *i);

int		ft_prog(int fd, int i);

int		ft_strichr(char *s, char c);

int		ft_realloc(char **realdest, char *src);

int		ft_first_line(char *buf, t_tab *map, int *i);

int		ft_good_buf(char *buf, t_tab *map, int index);

void	ft_size_column(char *buf, int *nb_column);

int		ft_before_read(int fd, char *buf, int *i, t_tab *map);

int		ft_exec_parse(char *buf, char **cnt_file, t_tab *map, int index);

int		ft_strlen(char *s);

void	ft_init_var(int *col, int *fdtmp, int i);

int		ft_countchr(char *s, char c);

int		ft_convert_map(t_tab *map, char *cnt_file);

void	ft_deconvert_tab(t_tab *map, t_memo memo);

void	ft_solve(t_tab *map, t_memo *memo);

void	ft_afiche_le_truc(t_tab map);

#endif
