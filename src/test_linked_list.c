/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_linked_list.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 03:14:54 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/01/16 03:52:37 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//Following tutorials from CodeVault YT channel - 
//https://www.youtube.com/watch?v=uBZHMkpsTfg&list=PLfqABt5AS4FmXeWuuNDS3XGENJO1VYGxl&index=1

int **validate_inputs(int agrc, char **argv)\
{
	int *input;
	int i;
	int	stack_len;

	i = 1;
	stack_len = 0;
	//check if I already have function for counting a array;s

	while (argv[i] != (void *)0)
	{
		//Validate what would happen if the argv is not valid;
		input[i] = ft_atoi(argv[i]);
		i++;
	}

	return(&input);
}

int push_swap(int argc, char **argv)
{
	t_node stack_a;

	validate_inputs(char **argv);
	stack_a.value = argv[1];
	stack_a.next = malloc(sizeof(t_node)); 
	stack_a.next->value = argv[2];
	stack_a.next->next = NULL;
	argc = 0;

	 
	return (0);
}