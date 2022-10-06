/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utiles.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:28:18 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 11:46:48 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	bebe_atoi(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = 0;
	while (str[i] >= '1' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}

int	size_int(int n)
{
	int	size;

	size = 0;
	while (n)
	{
		n = n / 10;
		size++;
	}
	return (size);
}
