/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduval <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:34:11 by juduval           #+#    #+#             */
/*   Updated: 2022/10/02 17:29:11 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"
int	ft_atoi(char *str)

{
	int	i;
	unsigned int	result;

	i = 0;
	result = 0;

	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - 48);
		i++;
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (NULL);
	}
	return (result);
}
