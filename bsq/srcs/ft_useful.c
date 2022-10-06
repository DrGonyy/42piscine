/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_useful.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:03:10 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 17:03:19 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_before_read(int fd, char *buf, int *i, t_tab *map)
{
	int	size;

	size = read(fd, buf, BUF_SIZE);
	if (size == -1)
		return (-1);
	buf[size] = 0;
	*i = 0;
	if (ft_first_line(buf, map, i))
		return (-1);
	map->nb_column = -1;
	return (size);
}

int	ft_exec_parse(char *buf, char **cnt_file, t_tab *map, int index)
{
	if (map->nb_column == -1)
		ft_size_column(buf, &map->nb_column);
	if (!ft_good_buf(buf, map, index))
		return (1);
	if (!ft_realloc(cnt_file, buf))
		return (1);
	return (0);
}
