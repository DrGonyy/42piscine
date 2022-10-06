/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:28:29 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 15:04:59 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"
#include <stdlib.h>
#include <unistd.h>

void	error_message(void)
{
	write(1, "Error\n", 6);
}

int	main(int argc, char **argv)
{
	int	**grille;
	int	size;

	if (argc != 2)
	{
		error_message();
		return (1);
	}
	size = verif_input(argv[1]) + 2;
	if (size == 2)
	{
		error_message();
		return (1);
	}
	grille = get_memory(size);
	initialisation(grille, argv[1], size);
	if (resolve(grille, size, 0))
	{
		aff_grille(grille, size);
	}
	else
		error_message();
	free_memory(grille, size);
}
