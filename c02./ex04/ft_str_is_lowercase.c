/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:11:35 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/18 08:22:44 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] >= 97 && str[i] <= 122)
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
		printf("%d\n", ft_str_is_lowercase(av[i]));
		i++;
	}
	return (0);
}*/
