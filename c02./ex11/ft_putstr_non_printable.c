/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 08:25:02 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/19 18:19:03 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	base_hexa(int x)
{
	char	*base;

	if (x <= 0)
		x = x + 256;
	base = "0123456789abcdef";
	ft_putchar(base[x / 16]);
	ft_putchar(base[x % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
			ft_putchar(str[i]);
		else
		{
			ft_putchar('\\');
			base_hexa((int)str[i]);
		}
		i++;
	}
}
/*
int	main()
{
	ft_putstr_non_printable("bonjour \n\n sfgxdg\200\200");
	return (0);
}*/
