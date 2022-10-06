/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 10:31:23 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/18 11:11:46 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 1;
	while (str[i])
	{
		if (str[0] >= 'a' && str[0] <= 'z')
			str[0] = str[0] -32;
		if (str[i] >= 'a' && str[i] <= 'z'
			&& (str[i - 1] < '0' || str[i -1] > 'z'
				|| (str[i - 1] > 'Z' && str[i -1] < 'a')
				|| (str[i - 1] > '9' && str[i - 1] < 'A')))
				str[i] = str[i] -32;
		i++;
	}
	return (str);
}
/*
int	main(int ac, char **av)
{
	printf("%s\n", ft_strcapitalize(av[1]));
	return (0);
}*/
