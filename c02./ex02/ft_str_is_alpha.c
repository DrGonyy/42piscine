/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 07:30:30 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/18 07:52:44 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ((str[i] >= 97 && str[i] <= 122)
			|| (str[i] >= 65 && str[i] <= 90)))
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}
/*
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > 0)
	{
		while (i < argc)
		{
			printf("%d\n", ft_str_is_alpha(argv[i]));
			i++;
		}
	}
	return (0);
}*/
