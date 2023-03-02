/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 06:00:15 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/02 06:01:45 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

static void	push(t_node **stack_a, t_node **stack_b)
{
	t_node	*temp;

	if ((*stack_b))
	{
		temp = ft_lstremove_start(stack_b);
		ft_lstadd_start(stack_a, temp);
	}
}

void	push_a(t_node **stack_a, t_node **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pa \n");
}

void	push_b(t_node **stack_a, t_node **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pb \n");
}

