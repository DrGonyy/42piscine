/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resolve.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:30:34 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 11:19:38 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"

int	ligne_valide(int **grille, int size, int x, int value)
{
	int	y;

	y = 1;
	while (y <= (size - 2))
	{
		if (grille[x][y] == value)
			return (0);
		y++;
	}
	return (1);
}

int	col_valide(int **grille, int size, int y, int value)
{
	int	x;

	x = 1;
	while (x <= (size - 2))
	{
		if (grille[x][y] == value)
			return (0);
		x++;
	}
	return (1);
}

int	backtracking(int **grille, int size, int position, int y)
{
	if (position == (size - 2) * (size - 2) - 1)
	{
		if (check_param_grille(grille, size))
			return (1);
	}
	else
	{
		if (y == size - 2)
		{
			if (!(check_line(grille, size, position)))
				return (0);
		}
		if (resolve(grille, size, position + 1))
			return (1);
	}
	return (0);
}

int	resolve(int **grille, int size, int position)
{
	int	x;
	int	y;
	int	i;

	x = position / (size - 2) + 1;
	y = position % (size - 2) + 1;
	i = 0;
	while (++i <= (size - 2))
	{
		if (ligne_valide(grille, size, x, i) && col_valide(grille, size, y, i))
		{
			grille[x][y] = i;
			if (backtracking(grille, size, position, y))
				return (1);
		}
	}
	grille[x][y] = 0;
	return (0);
}
