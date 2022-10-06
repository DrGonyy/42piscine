/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:04:36 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/28 12:40:22 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 1)
	{
		nb = nb * x;
		power--;
	}
	return (nb);
}
/*
int	main(int ac, char **av)
{
	printf("%d", ft_iterative_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
