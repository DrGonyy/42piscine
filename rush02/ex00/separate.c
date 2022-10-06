/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   separate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juduval <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:14:28 by juduval           #+#    #+#             */
/*   Updated: 2022/10/02 17:31:38 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "main.h"

char	ft_separate(char **str)

{
	int	indextab;
	int	up;
	
	up = 100:
	indextab = strlen(*str);
	while (*str[indextab] != '0')
	{
		if (indextab == strlen(*str))
		{
			ft_decompose(*str);
			indextab++;
		}
		else if (indextab != strlen(*str))
		{
			ft_decompose(*str);
			ft_putstr(up = up * 100)
			indextab++;
		}

	{
}

void	ft_decompose(char *str)

{
		if (str[0] == '0') 
		{
			write(1, &str[1], 1);
			write(1, "0", 1);
			write(1, &str[2], 1);
		}
		else if (str[0] != '1' && str[0] != '0')
		{
			write(1, &str[0], 1);
			write(1, ' ', 1);
			write(1, "100", 3);
			write(1, ' ', 1);
			write(1, &str[1], 1); 
			write(1, "0", 1);
			write(1, &str[2], 1);
		}
}
