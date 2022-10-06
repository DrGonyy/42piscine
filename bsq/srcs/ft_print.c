/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:01:17 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 17:01:19 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(long n)
{
	if (n < 0)
	{
		ft_putchar('-');
		return (ft_putnbr(-n));
	}
	if (n < 10)
		return (ft_putchar(n + '0'));
	ft_putnbr(n / 10);
	ft_putnbr(n % 10);
}

void	ft_putstr(char *s)
{
	while (*s)
		ft_putchar(*(s++));
}

void	ft_putstr_nl(char *s)
{
	ft_putstr(s);
	ft_putchar('\n');
}

void	ft_puterror(void)
{
	ft_putstr_nl("map error");
}
