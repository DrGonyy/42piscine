/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 17:39:14 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/02 19:14:20 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "main.h"
#include<stdlib.h>
#include<stdio.h>
int	ft_strlen_sep(char *str, char sep)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	return (i);
}

int	ft_count_word(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if(str[i])
			count++;
		while (str[i] && str[i] != ':')
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != '\n')
			i++;
	}
	return (count);
}

char	*ft_word1(char *str, char sep)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = ft_strlen_sep(str, sep);
	tab = malloc((len + 1) * sizeof(char *));
	if (!tab)
		return (0);
	while (i < len)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	*ft_word2(char *str, char sep)
{
	int		i;
	int		len;
	char	*tab;
	int		j;

	i = 0;
	j = 0;
	len = ft_strlen_sep(str, sep);
	tab = malloc((len + 1) * sizeof(char));
	if (!tab)
		return (0);
	while (j < len)
	{
		if (str[i] == 9 || str[i] >= 11 && str[i] <= 13 || str[i] == 32)
		{
			while (str[i] == 9 || str[i] >= 11 && str[i] <= 13 || str[i] == 32)
				i++;
			tab[j] = 32;
			j++;
		}
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	***ft_split(char *str)
{
	int		i;
	char	**valeurs;
	char	**key;
	int		nbw;
	char	***bon;

	i = 0;
	nbw = ft_count_word(str) / 2;
	valeurs = malloc((nbw + 1) * sizeof(char *));
	key = malloc((nbw + 1) * sizeof(char *));
	bon = malloc(3 * sizeof(char **));
	if (!key || !valeurs || !bon)
		return (0);
	while (i < nbw)
	{
		if (*str)
			key[i] = ft_word1(str, ':');
		while (*str && *str != ':')
			str++;
		while (*str && ((*str >= 9 && *str <= 13) || *str == 32 || *str == ':'))
			str++;
		if (*str)
		{
			valeurs[i] = ft_word2(str, '\n');
			i++;
		}
		while (*str && *str != '\n')
			str++;
	}
	key[i] = '\0';
	valeurs[i] = '\0';
	bon[0] = key;
	bon[1] = valeurs;
	bon[3] = '\0';
	return (bon);
}
