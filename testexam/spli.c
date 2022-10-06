/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spli.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 13:36:21 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/06 13:55:09 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	nb_w(char *str)
{
	int	c;

	c = 0;
	while (str && *str && (*str == ' ' || *str == '\n' || *str == '\t'))
		str++;
	if (str && *str && *str != ' ' && *str != '\n' && *str != '\t')
		c++;
	while (str && *str && *str != ' ' && *str != '\n' && *str != '\t')
		str++;
	if (str && *str && (*str == ' ' || *str == '\n' || *str == '\t'))
		c += nb_w(str);
	return (c);
}

int	nb_l(char *str)
{
	int	l;

	l = 0;
	while (str[l] && str[l] != ' ' && str[l] != '\n' && str[l] != '\t')
		l++;
	return (l);
}

char	**ft_split(char	*str)
{
	char	**dest;
	int	nbw;
	int	i;
	int	j;

	nbw = nb_w(str);
	dest = malloc(sizeof(char *) * (nbw + 1));
	if (!dest || !str)
		return (0);
	i = -1;
	while (++i < nbw)
	{
		j = 0;
		while (str && *str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		dest[i] = malloc(sizeof(char) * (nb_l(str) + 1));
		while (dest[i] && str && *str && *str != ' ' && *str != '\n' && *str != '\t')
		{
			dest[i][j++] = *str;
			str++;
		}
		dest[i][j] = 0;
	}
	dest[i] = 0;
	return (dest);
}

int	main(int ac, char **av)
{
	char **dest;
	int	i;

	i = -1;
	dest = ft_split(av[1]);
	while(dest[++i])
		printf("%s\n", dest[i]);
	return (0);
}
