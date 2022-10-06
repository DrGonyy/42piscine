/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_grille.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:50:39 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 06:50:44 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	aff_grille(int **tab, int size)
{
	int		x;
	int		y;
	int		n;
	char	value;

	n = size - 2;
	x = 1;
	while (x <= n)
	{
		y = 1;
		while (y <= n)
		{
			value = tab[x][y] + 48;
			write(1, &value, 1);
			if (y == n)
				write(1, "\n", 1);
			else
				write(1, " ", 1);
			y++;
		}
		x++;
	}
}
