/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 06:49:52 by hudelier          #+#    #+#             */
/*   Updated: 2022/09/21 09:58:51 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && s2[i] == s1[i] && i < n)
		i++;
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main()
{
	printf("%d",ft_strncmp("bonjour", "b", 6));
	return (0);
}*/
