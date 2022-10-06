/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 10:29:38 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/02 06:26:35 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	check_sep(char *sep, char c)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen(char *str, char *sep)
{
	int	i;

	i = 0;
	while (str[i] && !check_sep(sep, str[i]))
		i++;
	return (i);
}

int	ft_count_word(char *str, char *sep)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && check_sep(sep, str[i]))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_sep(sep, str[i]))
			i++;
	}
	return (count);
}

char	*ft_word(char *str, char *sep)
{
	int		i;
	int		len;
	char	*tab;

	i = 0;
	len = ft_strlen(str, sep);
	tab = malloc((len + 1) * sizeof(char));
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

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**res;
	int		nbw;

	i = 0;
	nbw = ft_count_word(str, charset);
	res = malloc((nbw + 1) * sizeof(char *));
	if (!res)
		return (0);
	while (i < nbw)
	{
		while (*str && check_sep(charset, *str))
			str++;
		if (*str)
		{
			res[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_sep(charset, *str))
			str++;
	}
	res[i] = '\0';
	return (res);
}
/*
int	main(int ac, char **av)
{
	char	**dest;
	int		i;

	i = -1;
	dest = ft_split(av[1], av[2]);
	while(dest[++i])
		printf("%s\n", dest[i]);
	return (0);
}*/
