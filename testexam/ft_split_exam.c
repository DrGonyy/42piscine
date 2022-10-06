/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_exam.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 07:58:29 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/30 08:38:50 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdlib.h>
int	nb_w(char *tab)
{
	int	nbw;

	nbw = 0;
	while (tab && *tab && (*tab == '\n' || *tab == '\t' || *tab == ' '))
		tab++;
	if (tab && *tab && *tab != '\n' && *tab != '\t' && *tab != ' ')
		nbw += 1;
	while (tab && *tab && *tab != '\n' && *tab != '\t' && *tab != ' ')
		tab++;
	if (tab && *tab && (*tab == '\n' || *tab == '\t' || *tab == ' '))
		nbw += nb_w(tab);
	return (nbw);
}

int	nb_l(char *tab)
{
	int	le;

	le = 0;
	while (tab && tab[le] && tab[le] != '\n' && tab[le] != '\t' && tab[le] != ' ')
		le++;
	return (le);
}

char	**ft_split(char *tab)
{
	char	**dest;
	int	nbw;
	int	i;
	int	j;

	i = -1;
	nbw = 0;
	nbw = (nb_w(tab));
	dest = malloc(sizeof(char *) * (nbw + 1));
	if (!tab ||!dest)
		return (0);
	while (++i < nbw)
	{
		j = 0;
		while (tab && *tab && (*tab == '\n' || *tab == '\t' || *tab == ' '))
			tab++;
		dest[i] = malloc(sizeof(char) * (nb_l(tab)));
		while (tab && *tab && *tab != '\t' && *tab != '\n' && *tab != ' ')
		{
			dest[i][j++] = *tab;
			tab++;
		}
		dest[i][j] = 0;
	}
	dest[i] = 0;
	return (dest);
}

int	main(void)
{
	char	*tab = "dsjkf jskdf sjf";
	char	**dest;
	int	i;

	i = -1;
	dest = ft_split(tab);
	while (dest[++i])
	{
		printf("%s\n", dest[i]);
	}
	return (0);
}
