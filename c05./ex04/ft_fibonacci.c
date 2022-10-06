/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 10:53:24 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/29 10:18:02 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	calcul(int x, int i, int index)
{
	if (index == 1 || index == 2)
		return (1);
	x = calcul(x, i, index - 1);
	i = calcul(x, i, index - 2);
	return (i + x);
}

int	ft_fibonacci(int index)
{
	int	x;
	int	i;

	x = 1;
	i = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1 || index == 2)
		return (1);
	x = calcul(x, i, index - 1);
	i = calcul(x, i, index - 2);
	return (x + i);
}
/*
int	main(int ac, char **av)
{
	printf("%d", ft_fibonacci(atoi(av[1])));
	return (0);
}*/
