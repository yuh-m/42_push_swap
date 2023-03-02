/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:55:54 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/02 05:56:58 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	rotate(t_node **stack)
{
	t_node	*temp;

	if ((*stack) || (*stack)->next)
	{
		temp = ft_lstremove_start(stack);
		ft_lstadd_end(stack, temp);
	}
}

void	rotate_a(t_node **stack_a)
{
	rotate(stack_a);
	ft_printf("ra \n");
}

void	rotate_b(t_node **stack_b)
{
	rotate(stack_b);
	ft_printf("rb \n");
}

void	rotate_rr(t_node **stack_a, t_node **stack_b)
{	
	rotate(stack_a);
	rotate(stack_b);
	ft_printf("rr \n");
}	
