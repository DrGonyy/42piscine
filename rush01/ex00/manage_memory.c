/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_memory.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 06:28:47 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/25 11:19:14 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**get_memory(int size)
{
	int	**tab;
	int	i;

	i = 0;
	tab = malloc(size * sizeof(int *));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = malloc(size * sizeof(int));
		if (!tab[i])
			return (NULL);
		i++;
	}
	return (tab);
}

void	free_memory(int **tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(tab[i++]);
	free(tab);
}
