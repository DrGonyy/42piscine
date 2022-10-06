/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   howmanytab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduval <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:49:46 by juduval           #+#    #+#             */
/*   Updated: 2022/10/02 22:37:30 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

int	howmanytab(char *soi)
{
	int	nbtab;

	size = ft_strlen(soi)
	if ((size % 3) == 0)
		nbtab = (size / 3);
	else if ((size % 3) != 0)
		nbtab = ((size / 3) + 1);
	return (nbtab);
}

char	**tab_devoila(char *str)
{
	int	i;
	int	j;
	char	**tab;
	int	l;

	j = 0;
	l = howmanytab(str);
	tab = malloc(sizeof(char *) * (l + 1));
	if (!tab)
		return (NULL);
	i = strlen(str);
	while (j < l)
	{
		tab[j] = malloc(sizeof(char) * 4);
		if (!tab[j])
			return (NULL);
		if ((i - 1) < 0)
			tab[j][0] = 0;
		else
			tab[j][0] = str[i - 2];
		if ((i - 2) < 0)
			tab[i][1] = 0;
		else
			tab[j][1] = str[i - 1];
		tab[j][2] = str[i];
		tab[j][3] = '\0';
		j++;
		i -= 3;
	}
}

char	**tab_debonle_truc(char	**boite)
{
	int	i;
	int	j;
	char	**stud;

	i = 0;
	j = 0;
	
}
