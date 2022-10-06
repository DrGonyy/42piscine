/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_line.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:24:52 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/06 11:42:19 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<all.h>
int	check_left(int **tab, int size, int position)
{
	int	x;
	int	max;
	int	total;
	int	y;

	x = (position / (size - 2)) + 1;
	y = 2;
	max = tab[x][y - 1];
	total = 1;
	while (y <= size - 1)
	{
		if (tab[x][y] > max)
		{
			total += 1;
			max = tab[x][y];
		}
		y++;
	}
	if (total != tab[x][0])
		return (0);
	return (1);
}

int	check_right(int **tab, int size, int position)
{
	int	x;
	int	max;
	int	total;
	int	y;

	x = (position / (size - 2)) + 1;
	y = size - 3;
	max = tab[x][y + 1];
	total = 1;
	while (y >= 1)
	{
		if (tab[x][y] > max)
		{
			total += 1;
			max = tab[x][y];
		}
		y--;
	}
	if (total != tab[x][size - 1])
		return (0);
	return (1);
}

int	check_line(int **tab, int size, int position)
{
	if (check_left(tab, size, position) && check_right(tab, size, position))
		return (1);
	return (0);
}
