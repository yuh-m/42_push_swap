/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_aux.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 02:59:46 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/27 03:29:26 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_node	*get_stack_end(t_node *stack)
{
	t_node	*temp;

	temp = stack;
	while (temp->next)
		temp = temp->next;
	return (temp);
}

//initialize a new node
t_node	*ft_init_node(int content)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit (1);
	new->value = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

void	deallocate_stack(t_node **stack)
{
	t_node	*temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}