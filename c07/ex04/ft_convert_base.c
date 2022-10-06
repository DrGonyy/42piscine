/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 09:59:18 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/04 09:55:45 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_check_base(char *base);
int		ft_strrch(char *base, char c);
int		ft_passe(char *str, int i);
int		ft_strlen(char *base);
int		ft_atoi_base(char *str, char *base);

int	taille_int(long int nb, int len)
{
	int	i;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i++;
		nb = -nb;
	}
	while (nb > 0)
	{
		i++;
		nb = nb / len;
	}
	return (i);
}

char	*ft_itoa_base(long int ato, char *base)
{
	char	*dest;
	int		len;
	int		i;

	i = 0;
	while (base[i])
		i++;
	len = taille_int(ato, i);
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (0);
	dest[len] = '\0';
	if (ato == 0)
		dest[--len] = base[0];
	if (ato < 0)
	{
		ato = ato * -1;
		dest[0] = '-';
	}
	while (ato > 0)
	{
		dest[--len] = base[ato % i];
		ato = ato / i;
	}
	return (dest);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	ato;

	if (ft_check_base(base_from) == 1 || ft_check_base(base_to) == 1)
		return (0);
	ato = ft_atoi_base(nbr, base_from);
	return (ft_itoa_base(ato, base_to));
}
/*
int	main(int ac, char **av)
{
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
	//printf("%s", ft_convert_base("-12", "01", "12"));
	return (0);
}*/
