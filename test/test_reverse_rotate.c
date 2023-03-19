/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 03:24:17 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/19 02:59:20 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "unity/src/unity.h"

/*first elements are on the bottom of the stack
int n -> number of elements
... -> elements
where the first argument is the top of the stack
stack_a, 3, 5, 6, 7 -> "5 is the top of the stack"
*/
void static generate_linked_list(t_node **stack, int n, ...)
{
	va_list		args;
	int			i;
	int			value;
	t_node		*temp;

	va_start(args, n);
	i = 0;
	while (i < n)
	{
		value = va_arg(args, int);
		temp = ft_init_node(value);
		ft_lstadd_end(stack, temp);
		i++;
	}
	va_end(args);
}

void test_rrotate_a(void)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;

	generate_linked_list(&stack_a, 3, 4 ,5, 6);
	generate_linked_list(&stack_b, 3, 6 ,4, 5);
	//print_elements(stack_a);
	reverse_rotate_a(&stack_a);
	//print_elements(stack_a);
	while (stack_a)
	{
		TEST_ASSERT_EQUAL_INT(stack_b->value, stack_a->value);
		stack_a = stack_a->next;
		stack_b = stack_b->next;
	}
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);
}

void test_rrotate_b(void)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;

	generate_linked_list(&stack_a, 3, 4 ,5 ,6);
	generate_linked_list(&stack_b, 3, 5 ,6, 4);
	reverse_rotate_b(&stack_b);

	while (stack_a)
	{
		TEST_ASSERT_EQUAL_INT(stack_b->value, stack_a->value);
		stack_a = stack_a->next;
		stack_b = stack_b->next;
	}
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);
}

void test_rrotate_ntimes_b(void)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;

	generate_linked_list(&stack_a, 3, 6 ,4 ,5);
	generate_linked_list(&stack_b, 3, 6 ,4, 5);
	reverse_rotate_b(&stack_b);
	reverse_rotate_b(&stack_b);
	reverse_rotate_b(&stack_b);

	while (stack_a)
	{
		TEST_ASSERT_EQUAL_INT(stack_b->value, stack_a->value);
		stack_a = stack_a->next;
		stack_b = stack_b->next;
	}
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);
}

int test_operation_rrotate(void)
{
	UNITY_BEGIN();
	//RUN_TEST(test_swap_a_none);
	RUN_TEST(test_rrotate_a);
	RUN_TEST(test_rrotate_b);
	RUN_TEST(test_rrotate_ntimes_b);
	return UNITY_END();
}
