/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:43:25 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/16 14:03:39 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				x = tab[i];
				tab [i] = tab [j];
				tab [j] = x;
			}
			j++;
		}
		i++;
	}
}
/*
int    main(void)
{
    int parkour;
    int len;
    int tab[] = {4, 5, 2, 1, 3};
    
    len = 5;
    parkour = 0;
    ft_sort_int_tab(tab, len);
    while (parkour < len)
    {
            printf("%d\n", tab[parkour]);
        parkour++;
    }
    return(0);
}*/
