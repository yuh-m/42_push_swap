/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:12:44 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/25 20:21:27 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node *ft_init_node(int content)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit (1);
	new->value = content;
	new->next = NULL;
	return (new);
}

int ft_lstadd_start(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return (0);
	new->next = *lst;
	*lst = new;
	return (1);
}

int ft_lstadd_end(t_node **lst, t_node *new)
{
	t_node *temp;

	if (!lst || !new)
		return (0);
	if (!*lst)
	{
		*lst = new;
		return (1);
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (1);
}

//add elements of argv to stack_a
void argv_to_stack(int argc, char **argv, t_node **stack_a)
{
	int i;
	int num;

	i = 1;
	while (i < argc)
	{
		num = ft_atoi(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			exit (1);
		ft_lstadd_end(stack_a, ft_init_node(num));
		i++;
	}
}

int push_swap(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	
	validate_input(argc, argv);
	stack_a = NULL;
	argv_to_stack(argc, argv, &stack_a);


	//stack_a = NULL; 
	stack_b = NULL;

	return (0);
}