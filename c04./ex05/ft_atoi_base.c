/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 11:20:16 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/22 17:01:43 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		if (base[i] == '+' || base[i] == '-'
			|| (base[i] >= 9 && base[i] <= 13) || base[i] == ' ')
			return (1);
		i++;
	}
	if (i < 2)
		return (1);
	return (0);
}

int	ft_strrch(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_passe(char *str, int i)
{
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++ ;
	return (i);
}

int	ft_strlen(char *base)
{
	int	x;

	x = 0;
	while (base[x])
		x++;
	return (x);
}

int	ft_atoi_base(char *str, char *base)
{
	int			i;
	int			sign;
	long int	nb;
	int			x;

	sign = 1;
	nb = 0;
	x = ft_strlen(base);
	if (ft_check_base(base) == 1)
		return (0);
	i = ft_passe(str, 0);
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i])
	{
		if (ft_strrch(base, str[i]) < 0)
			return (nb);
		nb = nb * x + ft_strrch(base, str[i]);
		i++;
	}
	return (nb * sign);
}
/*
int	main(void)
{
	printf("%d", ft_atoi_base("123456", "0123456789"));
	return (0);
}*/
