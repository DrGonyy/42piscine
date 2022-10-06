/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 09:27:32 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 08:00:02 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc((max - min) * sizeof(int));
	if (!range)
		return (-1);
	i = 0;
	while (i < max - min)
	{
		range[0][i] = min + i;
		i++;
	}
	return (i);
}
/*
int	main(void)
{

    int tab = ft_range(25, 50);
    printf("%d\n%d\n%d\n%d\n%d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
    return (0);
}*/
