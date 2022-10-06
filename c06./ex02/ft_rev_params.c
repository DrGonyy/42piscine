/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:40:18 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/26 17:43:26 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	j;

	while (--ac > 0)
	{
		j = 0;
		while (av[ac][j])
		{
			ft_putchar(av[ac][j]);
			j++;
		}
		ft_putchar('\n');
	}
	return (0);
}
