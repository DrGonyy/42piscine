/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 07:51:57 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 08:11:08 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

int	ft_lengh(char **str, int size, char *sep)
{
	int	i;
	int	lengh;

	i = 0;
	lengh = 0;
	while (i < size)
	{
		lengh = lengh + ft_strlen(str[i]);
		i++;
	}
	lengh = lengh + (ft_strlen(sep) * (size - 1));
	return (lengh);
}

char	*ft_strjoinsub2(int size, char **strs, char *sep)
{
	char	*str;
	int		x;
	int		i;
	int		j;

	x = 0;
	str = malloc(sizeof(char) * (ft_lengh(strs, size, sep) + 1));
	if (!str)
		return (NULL);
	str[ft_lengh(strs, size, sep)] = '\0';
	i = -1;
	while (++i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			str[x++] = strs[i][j++];
		j = 0;
		while (sep[j] != '\0' && i < (size - 1))
			str[x++] = sep[j++];
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;

	if (size <= 0)
	{
		str = malloc(1);
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	else
		return (ft_strjoinsub2(size, strs, sep));
}
/*
int	main(int argc, char **argv)
{
    char    *sep;

    sep = "___";
    printf("%s\n", ft_strjoin(argc - 1, argv + 1, sep));
}*/
