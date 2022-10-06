/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:00:58 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/21 12:24:31 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_address(unsigned long addr)
{
	char	*base_hexa;
	char	memoire[17];
	int		i;

	base_hexa = "0123456789abcdef";
	i = 0;
	while (addr)
	{
		memoire[i] = base_hexa[addr % 16];
		addr = addr / 16;
		i++;
	}
	while (i < 16)
	{
		memoire[i] = '0';
		i++;
	}
	i--;
	while (i + 1)
	{
		write(1, &memoire[i], 1);
		i--;
	}
	write(1, ": ", 2);
}

void	ft_print_hexa(unsigned char *addr, int posit)
{
	int		i;
	char	*base_hexa;

	base_hexa = "0123456789abcdef";
	i = 0;
	while (i < 16 && posit - i)
	{
		ft_putchar(base_hexa[addr[i] / 16]);
		ft_putchar(base_hexa[addr[i] % 16]);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2)
			write(1, " ", 1);
		i++;
	}
}

void	ft_print_valeurs(unsigned char *addr, int posit)
{
	int	i;

	i = 0;
	while (i < 16 && posit--)
	{
		if (addr[i] >= 32 && addr[i] <= 126)
			ft_putchar(addr[i]);
		else
			ft_putchar('.');
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	valeurs;
	unsigned int	posit;

	posit = 0;
	valeurs = (unsigned long)addr;
	(void)size;
	while (posit < size)
	{
		ft_print_address(valeurs + posit);
		ft_print_hexa((unsigned char *)(valeurs + posit), size - posit);
		ft_print_valeurs((unsigned char *)(valeurs + posit), size - posit);
		write(1, "\n", 1);
		posit += 16;
	}
	return (addr);
}


int	main(void)
{
    char    *str = NULL;
    ft_print_memory(str, 54);
}

