/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:05:36 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/15 18:56:58 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

void	ft_print_comb2(void)
{
	int	i;
	int	y;

	i = 0;
	while (i <= 98)
	{
		y = i + 1;
		while (y <= 99)
		{
			if (i <= 9)
				ft_putchar('0');
			ft_putnbr(i);
			ft_putchar(' ');
			if (y <= 9)
				ft_putchar('0');
			ft_putnbr(y);
			if (i == 98)
				return ;
			ft_putchar(',');
			ft_putchar(' ');
			y++;
		}
		i++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
