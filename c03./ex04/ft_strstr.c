/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 11:50:20 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/21 08:04:23 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		x = i;
		j = 0;
		if (str[x] == to_find[j])
		{
			while (str[x] && to_find[j] && str[x] == to_find[j])
			{
				x++;
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(int ac, char **av)
{
	printf("%s", ft_strstr(av[1], av[2]));
	return (0);
}*/
