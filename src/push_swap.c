/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:12:44 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/27 03:03:26 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int print_elements(t_node *stack)
{
	t_node *temp;

	temp = stack;
	while (temp)
	{
		printf("%d \n", temp->value);

		temp = temp->next;
	}
	return (0);
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
	print_elements(stack_a);
	stack_b = get_stack_end(stack_a);
	printf("stack_b: %d \n", stack_b->value);
	deallocate_stack(&stack_a);

	return (0);
}

