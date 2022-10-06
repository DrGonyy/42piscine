/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dt_split_exam2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:16:22 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/30 11:00:55 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	nb_w(char *s)
{
	int	c;

	c = 0;
	while (s && *s && (*s == '\n' || *s == '\t' || *s == ' '))
		s++;
	if (s && *s && *s != '\n' && *s != '\t' && *s != ' ')
		c += 1;
	while (s && *s && *s != '\n' && *s != '\t' && *s != ' ')
		s++;
	if (s && *s && (*s == '\n' || *s == '\t' || *s == ' '))
		c += nb_w(s);
	return (c);
}

int	nb_l(char *s)
{
	int	le;

	le = 0;
	while (s && s[le] && s[le] != '\n' && s[le] != '\t' && s[le] != ' ')
		le++;
	return (le);
}

char	**ft_split(char *tab)
{
	char	**dest;
	int	i;
	int	j;
	int	nbw;

	nbw = 0;
	nbw = nb_w(tab);
	dest = malloc(sizeof(char *) * (nbw + 1));
	if (!tab || !dest)
		return (0);
	i = -1;
	while (++i < nbw)
	{
		j = 0;
		while (tab && *tab && (*tab == '\n' || *tab == '\t' || *tab == ' '))
			tab++;
		dest[i] = malloc(sizeof(char) * nb_l(tab));
		while (tab && *tab && *tab != '\n' && *tab != '\t' && *tab != ' ')
		{
			dest[i][j++] = *tab;
			tab++;
		}
		dest[i][j] = 0;
	}
	dest[i] = 0;
	return (dest);
}

int	main()
{
	char **dest;
	char *t = "Dfa sfa";
	int	i;

	i = -1;
	dest = ft_split(t);
	while (dest[++i])
		printf("%s\n", dest[i]);
	return (0);
}
