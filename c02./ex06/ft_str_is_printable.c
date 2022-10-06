/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:11:35 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/19 16:06:52 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] > 31 && str[i] < 127)
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
/*
int	main (int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("%d\n", ft_str_is_printable(av[i]));
		i++;
	}
	return (0);
}*/
