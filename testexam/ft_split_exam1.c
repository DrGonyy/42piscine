/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_exam1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 09:20:45 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/30 10:09:03 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int	nb_w(char *str)
{
	int	count;

	count = 0;
	while (str && *str && (*str == '\n' || *str == '\t' || *str == ' '))
		str++;
	if (str && *str && *str != '\n' && *str != '\t' && *str != ' ')
		count += 1;
	while (str && *str && *str != '\t' && *str != '\n' && *str != ' ')
		str++;
	if (str && *str && (*str == '\t' || *str == '\n' || *str == ' '))
		count += nb_w(str);
	return (count);
}

int	nb_l(char *str)
{
	int	le;

	le = 0;
	while (str && str[le] && (str[le] != '\n' || str[le] != ' '
			|| str[le] != '\t'))
		le++;
	return (le);
}

char	**ft_split(char *tab)
{
	char	**dest;
	int		i;
	int		j;
	int		nbw;

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
		dest[i] = malloc(sizeof(char) * (nb_l(tab)));
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

int	main(void)
{
	char	*tab;
	char	**b;
	int		i;

	tab = "gdsfg sdg ";
	i = -1;
	b = ft_split(tab);
	while (b[++i])
		printf("%s\n", b[i]);
	return (0);
}
