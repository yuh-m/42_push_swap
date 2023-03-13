/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 06:04:08 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/05 20:44:03 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//index of the smallest element in the stack
int		get_min_index(t_node *stack)
{
	int		i;
	int		min;
	t_node	*temp;

	i = 0;
	temp = stack;
	min = 0;
	while (temp)
	{
		if (temp->index <= min)
		{
			min = temp->index;
			i = 0;
		}
		temp = temp->next;
		i++;
	}
	return (i);
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

