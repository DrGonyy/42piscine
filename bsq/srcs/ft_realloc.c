/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:02:06 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 17:02:09 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	ft_realloc(char **realdest, char *src)
{
	char	*dest;
	char	*tmp;
	int		len;
	int		i;

	len = ft_strlen(*realdest) + ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	tmp = *realdest;
	i = 0;
	while (*realdest && *tmp)
		dest[i++] = *(tmp++);
	while (*src)
		dest[i++] = *(src++);
	dest[i] = 0;
	if (*realdest)
		free(*realdest);
	*realdest = dest;
	return (1);
}
