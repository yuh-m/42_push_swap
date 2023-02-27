/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:28:47 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/27 03:37:42 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//remove the first element of a doubly linked list and return it
t_node	*ft_lstremove_start(t_node **stack)
{
	t_node *temp;

	temp = *stack;
	if (*stack)
	{
		*stack = (*stack)->next;
		(*stack)->prev = NULL;
	}
	return (temp);
}

t_node *ft_lstremove_end(t_node **stack)
{
	t_node *temp;

	
	temp = get_stack_end(*stack);
	temp->prev->next = NULL;
	return (temp);
}