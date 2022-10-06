/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_exam.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:31:21 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/30 12:18:24 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	nb_w(char *s)
{
	int	u;

	u = 0;
	while (s && *s && (*s == '\n' || *s == '\t' || *s == ' '))
		s++;
	if (s && *s && *s != '\n' && *s != '\t' && *s != ' ')
		u += 1;
	while (s && *s && *s != '\n' && *s != '\t' && *s != ' ')
		s++;
	if (s && *s && (*s == '\n' || *s == '\t' || *s == ' '))
		u += nb_w(s);
	return (u);
}

int	nb_l(char *s)
{
	int	le;

	le = 0;
	while (s && s[le] && s[le] != '\n' && s[le] != '\t' && s[le] != ' ')
		le ++;
	return (le);
}

char	**dt_split(char *str)
{
	char	**dest;
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
		while (str && *str && (*str == '\t' || *str == '\n' || *str == ' '))
			str++;
		dest[i] = malloc(sizeof(char) * nb_l(str));
		while (str && *str && *str != '\t' && *str != '\n' && *str != ' ')
		{
			dest[i][j] = *str;
			str++;
			j++;
		}
		dest[i][j] = 0;
	}
	dest[i] = 0;
	return (dest);
}

int	main()
{
	char	**dest;
	char	*s = "hd dh oe of";
	int	i;

	i = -1;
	dest = dt_split(s);
	while (dest[++i])
	{
		printf("%s\n", dest[i]);
	}
	return(0);
}
