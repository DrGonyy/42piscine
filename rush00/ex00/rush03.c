/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stde-la- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 11:39:43 by stde-la-          #+#    #+#             */
/*   Updated: 2022/09/18 16:16:25 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_top_bottom_line(char left, char right, int j, int x)
{
	if (j == 1)
		ft_putchar(left);
	else if (j == x)
		ft_putchar(right);
}

void	ft_draw(int i, int j, int x, int y)
{
	char	top[2];
	char	bottom[2];
	char	side;
	char	top_side;

	top[0] = 'A';
	top[1] = 'C';
	bottom[0] = 'A';
	bottom[1] = 'C';
	side = 'B';
	top_side = 'B';
	if (i == 1)
		ft_top_bottom_line(top[0], top[1], j, x);
	else if (i == y)
		ft_top_bottom_line(bottom[0], bottom[1], j, x);
	else if (j == 1 || j == x)
		ft_putchar(side);
	else
		ft_putchar(' ');
	if ((i == 1 || i == y) && j != 1 && j != x)
		ft_putchar(top_side);
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= y)
	{
		j = 1;
		while (j <= x)
		{
			ft_draw(i, j, x, y);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + str[i] - 48;
		i++;
	}
	return (nb);
}
