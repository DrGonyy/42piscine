/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:59:14 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/29 09:41:22 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	*dest;
	int	i;
	int	x;

	if (min >= max)
		return (0);
	dest = (int *)malloc(sizeof(int) * (max - min));
	if (!dest)
		return (0);
	i = 0;
	x = min;
	while (i < max - min)
	{
		dest[i] = x;
		x++;
		i++;
	}
	return (dest);
}
/*
int	main()
{
	int	*i;
	int	j;

	j = 0;
	i = ft_range(-1, 9);
	while(j < 10)
	{
		printf("%d\n", i[j]);
		j++;
	}
	return (0);
}*/
