/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:09:35 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/19 03:07:01 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	swap(t_node **stack)
{
	t_node	*temp;

	if ((*stack) || (*stack)->next)
	{
		temp = ft_lstremove_after((*stack));
		ft_lstadd_start(stack, temp);
	}
}

void	swap_a(t_node **stack_a)
{
	swap(stack_a);
	ft_printf("sa \n");
}

void	swap_b(t_node **stack_b)
{
	swap(stack_b);
	ft_printf("sb \n");
}

void	swap_ss(t_node **stack_a, t_node **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_printf("ss \n");
}
