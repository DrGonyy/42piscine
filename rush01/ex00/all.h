/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hudelier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:18:48 by hudelier          #+#    #+#             */
/*   Updated: 2022/10/06 11:41:26 by hudelier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ALL_H
#define ALL_H

void	aff_grille(int **tab, int size);
int		check_left(int **tab, int size, int position);
int		check_right(int **tab, int size, int position);
int		check_line(int **tab, int size, int position);
void	set_to_0(int **grille, int size);
int		*arg_to_int(char *argv, int size);
void	set_arg(int **grille, int *arg, int size);
void	initialisation(int **grille, char *agrv, int size);
int		bebe_atoi(char *str);
int		size_int(int n);
int		**get_memory(int size);
void	free_memory(int **tab, int size);
int		resolve(int **grille, int size, int position);
int		backtracking(int **grille, int size, int position, int y);
int		ligne_valide(int **grille, int size, int x, int value);
int		col_valide(int **grille, int size, int y, int value);
int		up(int **tab, int size);
int		down(int **tab, int size);
int		left(int **tab, int size);
int		right(int **tab, int size);
int		check_param_grille(int **tab, int size);
int		verif_input(char *argv);
int		ft_nb_arg(char *argv);
int		ft_nb_space(char *argv);
int		check_nb(int *arg_int, int nb_arg);

#endif
