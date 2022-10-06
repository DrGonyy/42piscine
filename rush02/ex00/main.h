/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 16:50:41 by malancar          #+#    #+#             */
/*   Updated: 2022/10/02 21:46:52 by hudelier         ###   ########.fr       */
/*   Updated: 2022/10/02 17:40:28 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int	ft_atoi(char *str);
void	ft_error(void);
void	ft_dict_error(void);
int	howmanytab(char *soi);
char	*ft_strcpy(char *dest, char *src);
void	ft_swap(int *a, int *b);
int	ft_strlen_sep(char *str, char sep);
int	ft_count_word(char *str);
char	*ft_word1(char *str, char ep);
char	*ft_word2(char *str, char sep);
char	***ft_split(char *str);
void	ft_putchar(char c);
char	ft_strcmp(char *s1, char *s2);
int	*ft_putstr(char *str);
int	ft_strlen(char *str);
char	ft_seperate(char **str);
void	ft_decompose(char *str);

#endif
