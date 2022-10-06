/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:12:02 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/23 08:41:36 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		while (base[j] && base[i])
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	long	n;

	i = 0;
	n = (long)nbr;
	if (ft_check_base(base) == 1)
		return ;
	while (base[i])
		i++;
	if (n < 0)
	{
		n = n * -1;
		ft_putchar('-');
	}
	if (n > i - 1)
	{
		ft_putnbr_base(n / i, base);
		ft_putnbr_base(n % i, base);
	}
	else
		ft_putchar(base[n]);
}
/*
int	main()
{
	ft_putnbr_base(-2147483648, "0123456789");
	return (0);
}*/
