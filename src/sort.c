/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 06:04:08 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/15 20:34:50 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//check if the stack is sorted - Return 0 if not sorted, 1 if sorted
int	stack_is_sorted(t_node *stack)
{
	t_node	*temp;

	temp = stack;
	while (temp->next)
	{
		if (temp->value > temp->next->value)
			return (0);
		temp = temp->next;
	}
	return (1);
}

void sort_three(t_node **stack_a)
{
		if ((*stack_a)->index == 2)
			rotate_a(stack_a);
		else if ((*stack_a)->next->index == 2)
			reverse_rotate_a(stack_a);
		if ((*stack_a)->index > (*stack_a)->next->index)
			swap_a(stack_a);
}

int stack_size(t_node *stack)
{
	int		size;
	t_node	*temp;

	size = 0;
	temp = stack;
	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size);
}

//sorts the stack in ascending order
void	sort(t_node **stack_a, t_node **stack_b)
{
	int		size;
	int		i;

	size = stack_size(*stack_a);
	if (size == 2)
	{
		if ((*stack_a)->value > (*stack_a)->next->value)
			swap_a(stack_a);
	}
	else if (size == 3)
		sort_three(stack_a);
	else
	{
		i = 0;
		while (i < size)
		{
			if ((*stack_a)->index == 0)
			{
				print_elements(*stack_a);
				print_elements(*stack_b);
				push_b(stack_a, stack_b);
			}
			else
				rotate_a(stack_a);
			i++;
			//ft_printf("print stack a \n");
			//print_elements(*stack_a);
			//ft_printf("print stack b \n");
			//print_elements(*stack_b);
			//print_elements(*stack_b);
			//ft_printf("stack_b->next->value %d \n", (*stack_b)->next->value);
		}

		sort(stack_a, stack_b);
		sort(stack_b, stack_a);
		while (*stack_b)
		{
			push_a(stack_a, stack_b);
		}
	}

}
