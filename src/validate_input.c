/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_input.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 06:36:21 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/25 04:35:46 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

/**
* @brief compare two strings
* @param strings s1 and s2
* @return 0 if the strings are equal, otherwise return the difference between the first different characters
*/
static int ft_strcmp(const char *s1, const char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

static int check_duplicates(char *str, char **argv, int i)
{
	int j;

	j = 1;
	while (argv[i + j] != (void *)0)
	{
		if (ft_strcmp(str, argv[i + j]) == 0)
		{
			ft_fprintf(2, "Error\n");
			exit (22);
		}
		j++;
	}
	return (1);
}	

static int validate_args(int argc)
{
	if (argc >= 2)
		return (0);
	exit (1);
}

int validate_input(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	validate_args(argc);
	while (argv[i] != (void *)0)
	{
		check_duplicates(argv[i], argv, i);
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (ft_isdigit(argv[i][j]) == 0 && argv[i][j] != '-')
			{
				ft_fprintf(2, "Error\n");
				exit (22);
			}
			j++;
		}
		i++;
	}
	return (1);
}
