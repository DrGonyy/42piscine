/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:13:28 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/28 12:42:24 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power > 1)
	{
		power--;
		x = ft_recursive_power(nb, power);
		nb = nb * x;
	}
	return (nb);
}
/*
int	main(int ac, char **av)
{
	printf("%d", ft_recursive_power(atoi(av[1]), atoi(av[2])));
	return (0);
}*/
