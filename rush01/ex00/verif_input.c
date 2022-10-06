/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:32:46 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 14:46:45 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "all.h"
#include <stdlib.h>

int	ft_nb_arg(char *argv)
{
	int	i;
	int	nb_arg;

	nb_arg = 0;
	i = 0;
	while (argv[i])
	{
		if (argv[i] >= '1' && argv[i] <= '9')
			nb_arg++;
		i++;
	}
	return (nb_arg);
}

int	ft_nb_space(char *argv)
{
	int	i;
	int	nb_space;

	nb_space = 0;
	i = 0;
	while (argv[i])
	{
		if (argv[i] == ' ')
			nb_space++;
		i++;
	}
	return (nb_space);
}

int	check_nb(int *arg_int, int nb_arg)
{
	int	i;

	i = 0;
	while (i < nb_arg)
	{
		if (arg_int[i++] > nb_arg / 4)
			return (1);
	}
	return (0);
}

int	verif_input(char *argv)
{
	int	i;
	int	nb_arg;
	int	nb_space;
	int	*int_arg;

	i = 0;
	while (argv[i])
	{
		if (!(argv[i] == ' ' || (argv[i] >= '1' && argv[i] <= '9')))
			return (0);
		i++;
	}
	nb_arg = ft_nb_arg(argv);
	nb_space = ft_nb_space(argv);
	if (nb_arg % 4 != 0 || nb_space != nb_arg - 1)
		return (0);
	int_arg = arg_to_int(argv, nb_arg / 4 + 2);
	if (check_nb(int_arg, nb_arg))
	{
		free(int_arg);
		return (0);
	}
	free(int_arg);
	return (nb_arg / 4);
}
