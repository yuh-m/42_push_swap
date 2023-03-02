/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 06:04:08 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/02 06:07:37 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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
