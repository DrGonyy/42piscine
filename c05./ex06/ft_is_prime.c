/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:25:13 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/26 17:31:56 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb <= 1)
		return (0);
	while (nb / x >= x)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}
/*
int	main(int ac, char **av)
{
	printf("%d", ft_is_prime(atoi(av[1])));
	return (0);
}*/
