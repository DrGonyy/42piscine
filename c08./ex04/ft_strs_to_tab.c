/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 09:58:30 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/06 10:17:44 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = ft_strlen(str);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (0);
	while (str[i])
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab;

	tab = malloc((ac + 1) * sizeof(struct s_stock_str));
	if (!tab)
		return (0);
	i = 0;
	while (i < ac)
	{
		tab[i].size = ft_strlen(av[i]);
		tab[i].str = av[i];
		tab[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab[i].str = '\0';
	tab[i].copy = '\0';
	return (tab);
}
/*
int	main(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*tab_struc;

	tab_struc = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		printf("src : %s\n", tab_struc[i].str);
		printf("cpy : %s\n", tab_struc[i].copy);
		printf("size : %d\n\n", tab_struc[i].size);
		i++;
	}
}*/
