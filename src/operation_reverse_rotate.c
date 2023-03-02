/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_reverse_rotate.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:56:51 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/02 05:59:15 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	reverse_rotate(t_node **stack)
{
	t_node	*temp;

	if ((*stack) || (*stack)->next)
	{
		temp = ft_lstremove_end(stack);
		ft_lstadd_start(stack, temp);
	}
}

void	reverse_rotate_a(t_node **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra \n");
}

void	reverse_rotate_b(t_node **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb \n");
}

void	reverse_rotate_rrr(t_node **stack_a, t_node **stack_b)
{	
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr \n");
}
