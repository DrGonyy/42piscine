/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 14:15:37 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/15 17:32:03 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comma(void)
{
	write(1, ", ", 2);
}

void	print_comb(int combin[], int length)
{
	int	i;
	int	l;

	i = 0;
	l = 10 - length;
	while (i < length)
	{
		ft_putchar(combin[i] + 48);
		i++;
	}
	if (combin[0] == l)
		return ;
	print_comma();
}

void	comb_recur(int first_digit, int to_write, int combin[], int length)
{
	int	i;

	if (to_write <= 0)
	{
		print_comb(combin, length);
		return ;
	}
	i = first_digit;
	while (i <= 9)
	{
		combin[length - to_write] = i;
		comb_recur(i + 1, to_write - 1, combin, length);
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	combin[10];

	if (n < 1 || n > 9)
		return ;
	comb_recur(0, n, combin, n);
}

/*int main(void)
{
	ft_print_combn(1);
}*/
