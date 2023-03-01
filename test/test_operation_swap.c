/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_operation_swap.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 03:24:17 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/01 11:30:13 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "unity/src/unity.h"
#include "unity/src/unity_internals.h"

//test functions on operation_swap.c file

//generate a linked list with a n number of elements


t_node* generate_linked_list(int n, ...)
{
	t_node	*stack;
	t_node	*temp;
	va_list	args;
	int		i;
	
	stack = ft_init_node(0);
	va_start(args, n);
	i = 0;
	while (i < n)
	{
		temp = ft_init_node(va_arg(args, int));
		ft_lstadd_start(&stack, temp);
		i++;
	}
	va_end(args);
	return (stack);
}

void setUp(void)
{
	// set stuff up here	
}

void tearDown(void)
{
	// clean stuff up here
}

void test_swap_a(void)
{
	t_node	*stack_a;
	t_node	*stack_b;
	
	stack_a = NULL;
	stack_b = NULL;
	swap_a(&stack_a);
	swap_b(&stack_b);
	TEST_ASSERT_EQUAL_INT(stack_a, stack_b);
}

int main(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_swap_a);
	return UNITY_END();
}
