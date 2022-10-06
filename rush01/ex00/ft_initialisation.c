/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initialisation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:25:46 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 14:57:39 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"
#include <stdlib.h>

void	set_to_0(int **grille, int size)
{
	int	x;
	int	y;

	x = 0;
	while (x < size)
	{
		y = 0;
		while (y < size)
		{
			grille[x][y] = 0;
			y++;
		}
		x++;
	}
}

int	*arg_to_int(char *argv, int size)
{
	int	*arg_int;
	int	i;
	int	j;

	j = 0;
	i = 0;
	arg_int = malloc(size * 4 * sizeof(int));
	if (!arg_int)
		return (NULL);
	while (argv[i])
	{
		if (argv[i] == ' ')
			i++;
		else
		{
			arg_int[j] = bebe_atoi(argv + i);
			i = i + size_int(arg_int[j]);
			j++;
		}
	}
	return (arg_int);
}

void	set_arg(int **grille, int *arg, int size)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	x = 0;
	y = 1;
	while (y < size - 1)
		grille[x][y++] = arg[i++];
	x = size - 1;
	y = 1;
	while (y < size - 1)
		grille[x][y++] = arg[i++];
	x = 1;
	y = 0;
	while (x < size - 1)
		grille[x++][y] = arg[i++];
	x = 1;
	y = size - 1;
	while (x < size - 1)
		grille[x++][y] = arg[i++];
}

void	initialisation(int **grille, char *argv, int size)
{
	int	*argv_int;

	set_to_0(grille, size);
	argv_int = arg_to_int(argv, size);
	set_arg(grille, argv_int, size);
	free(argv_int);
}
