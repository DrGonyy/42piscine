/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   plit_e.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 14:26:03 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/30 14:46:45 by hudelier         ###   ########.fr       */
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
	int	l;

	l = 0;
	while (s && s[l] && s[l] != '\n' && s[l] != '\t' && s[l] != ' ')
		l++;
	return (l);
}

char **split(char *str)
{
	char 	**dest;
	int	nbw;
	int	i;
	int	j;

	i = -1;
	nbw = 0;
	nbw = nb_w(str);
	dest = malloc(sizeof(char *) * (nbw + 1));
	if (!str || !dest)
		return (0);
	while (++i < nbw)
	{
		j = 0;
		while (str && *str && (*str == ' ' || *str == '\n' || *str == '\t'))
			str++;
		dest[i] = malloc(sizeof(char) * nb_l(str));
		while (str && *str && *str != '\n' && *str != '\t' && *str != ' ')
		{
			dest[i][j] = *str;
			j++;
			str++;
		}
		dest[i][j] = 0;
	}
	dest[i] = 0;
	return (dest);
}

int	main()
{
	char **dest;
	char *str = "bojout kki jkgf";
	int i;

	i = -1;
	dest = split(str);
	while (dest[++i])
		printf("%s", dest[i]);
	return (0);
}
