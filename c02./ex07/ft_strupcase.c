/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 09:52:35 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/18 11:12:21 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int	main(int ac, char **av)
{
	int	i;

	i = 1;
	while (i < ac)
	{
		printf("%s\n", ft_strupcase(av[i]));
		i++;
	}
	return (0);
}*/
