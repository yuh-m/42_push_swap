/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:12:44 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/13 23:17:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int print_elements(t_node *stack)
{
	t_node *temp;

	temp = stack;
	while (temp)
	{
		ft_printf("value %d || index %d \n", temp->value, temp->index);
		temp = temp->next;
	}
	ft_printf(" \n");

	return (0);
}

//sort the stack values in ascending order
void	assign_index(t_node **stack_a, int size)
{
	t_node		*temp;
	t_node		*highest;
	int			curr_index;
	long int	value;

	curr_index = size;
	while (--curr_index > 0)
	{
		temp = *stack_a;
		value = INT_MIN - 1;
		highest = NULL;
		while (temp)
		{
			if (temp->value > value && temp->index == 0)
			{
				value = temp->value;
				highest = temp;
				temp = *stack_a;
			}
			else
				temp = temp->next;
		}
		if (highest != NULL)
			highest->index = curr_index;
	}
}

int push_swap(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;

	validate_input(argc, argv);
	stack_a = NULL;
	stack_b = NULL;
	argv_to_stack(argc, argv, &stack_a);
	assign_index(&stack_a, argc - 1);

	ft_printf("sorting \n");
	//rotate_a(&stack_a);
	if (argc - 1 == 2 && !stack_is_sorted(stack_a))
		rotate_a(&stack_a);
	else if (argc - 1 == 3)
		sort_three(&stack_a);
	else  if()
	//sort(&stack_a, &stack_b, argc - 1);
	//print_elements(stack_b);
	//stack_b = get_stack_end(stack_a);
	//print_elements(stack_b);
	//swap_b(&stack_b);
	//ft_printf("stack_b: %d \n", stack_b->value);
	//print_elements(stack_b);
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);

	return (0);
}

