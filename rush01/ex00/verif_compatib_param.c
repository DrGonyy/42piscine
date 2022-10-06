/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_compatib_param.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:31:00 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 06:32:20 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	up(int **tab, int size)
{
	int	max;
	int	total;
	int	x;
	int	y;

	y = 1;
	while (y <= size - 2)
	{
		x = 2;
		max = tab[x - 1][y];
		total = 1;
		while (max < size - 2)
		{
			if (tab[x][y] > max)
			{
				total += 1;
				max = tab[x][y];
			}
			x++;
		}
		if (total != tab[0][y])
			return (0);
		y++;
	}
	return (1);
}

int	down(int **tab, int size)
{
	int	max;
	int	total;
	int	x;
	int	y;

	y = 1;
	while (y <= size - 2)
	{
		x = size - 3;
		max = tab[x + 1][y];
		total = 1;
		while (max < size - 2)
		{
			if (tab[x][y] > max)
			{
				total += 1;
				max = tab[x][y];
			}
			x--;
		}
		if (total != tab[size - 1][y])
			return (0);
		y++;
	}
	return (1);
}

int	left(int **tab, int size)
{
	int	max;
	int	total;
	int	x;
	int	y;

	x = 1;
	while (x <= size - 2)
	{
		y = 2;
		max = tab[x][y - 1];
		total = 1;
		while (max < size - 2)
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
		x++;
	}
	return (1);
}

int	right(int **tab, int size)
{
	int	max;
	int	total;
	int	x;
	int	y;

	x = 1;
	while (x <= size - 2)
	{
		y = size - 3;
		max = tab[x][y + 1];
		total = 1;
		while (max < size - 2)
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
		x++;
	}
	return (1);
}

int	check_param_grille(int **tab, int size)
{
	if (up(tab, size) && down(tab, size) && left(tab, size) && right(tab, size))
		return (1);
	else
		return (0);
}
