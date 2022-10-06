/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 12:27:28 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/17 10:56:37 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	x;

	i = 0;
	while (i < size / 2)
	{
		x = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = x;
		i++;
	}
}
/*
int    main(void)
{
    int parkour;
    int len;
    int tab[] = {1, 2, 3, 4, 5 ,4};
    
    len = 6;
    parkour = 0;
    ft_rev_int_tab(tab, len);
    while (parkour < len)
    {
            printf("%d\n", tab[parkour]);
        parkour++;
    }
    return(0);
}*/
