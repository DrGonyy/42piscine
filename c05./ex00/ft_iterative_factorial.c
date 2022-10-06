/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:44:51 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/26 09:55:26 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--x > 0)
		nb = nb * x;
	return (nb);
}
/*
int	main(int ac, char **av)
{
	printf("%d", ft_iterative_factorial(atoi(av[1])));
	return (0);
}*/
