/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:03:40 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 17:03:42 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int ac, char **av)
{
	int	fd;
	int	i;

	if (ac < 2)
	{
		if (ft_prog(0, 0))
			ft_puterror();
	}
	else
	{
		i = 0;
		while (++i < ac)
		{
			if (i != 1)
				ft_putchar('\n');
			fd = open(av[i], O_RDONLY);
			if (fd == -1)
				ft_puterror();
			else
				if (ft_prog(fd, i))
					ft_puterror();
			close(fd);
		}
	}
	return (0);
}
