/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 06:04:08 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/13 13:48:40 by codespace        ###   ########.fr       */
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

//sorts the stack in ascending order
void	sort(t_node **stack_a, t_node **stack_b, int size)
{
	int		i;
	int		j;
	int		min;
	int		min_index;
	t_node	*temp;

	i = 0;
	while (i < size)
	{
		temp = *stack_a;
		min = temp->value;
		min_index = 0;
		j = 0;
		while (temp)
		{
			if (temp->value < min)
			{
				min = temp->value;
				min_index = j;
			}
			temp = temp->next;
			j++;
		}
		if (min_index <= (size / 2))
		{
			while (min_index > 0)
			{
				rotate_a(stack_a);
				min_index--;
			}
		}
		else
		{
			while (min_index < size)
			{
				reverse_rotate_a(stack_a);
				min_index++;
			}
		}
		push_b(stack_a, stack_b);
		i++;
	}
}

//pushes the smallest element to the top of the stack

