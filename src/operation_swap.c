/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:09:35 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/27 03:26:03 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//swap the first 2 elements at the top of stack. Do nothing if there is only one or no elements).
void	swap(t_node **stack)
{
	t_node *temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->next;
		(*stack)->next = temp->next;
		temp->next = *stack;
		*stack = temp;
	}
}

//remove the first element of a doubly linked list and return it
t_node	*pop_top(t_node **stack)
{
	t_node *temp;

	temp = *stack;
	if (*stack)
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	return (temp);
}