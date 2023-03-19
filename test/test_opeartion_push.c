/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_opeartion_push.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 03:24:17 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/19 03:46:41 by codespace        ###   ########.fr       */
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

void test_push_a(void)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	int		values[] = {7, 4, 5, 6};
	int		i = 0;

	generate_linked_list(&stack_a, 3, 4 ,5, 6);
	generate_linked_list(&stack_b, 3, 7 ,4, 5);
	print_elements(stack_a);
	push_a(&stack_a, &stack_b);
	print_elements(stack_a);
	while (stack_a)
	{
		TEST_ASSERT_EQUAL_INT(values[i], stack_a->value);
		stack_a = stack_a->next;
		i++;
	}
	print_elements(stack_b);
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);
}

void test_push_b(void)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	int		values[] = {4, 5, 6, 4};
	int		i = 0;

	generate_linked_list(&stack_a, 3, 4 ,5 ,6);
	generate_linked_list(&stack_b, 3, 5 ,6, 4);
	push_b(&stack_a, &stack_b);

	while (stack_b)
	{
		TEST_ASSERT_EQUAL_INT(values[i], stack_b->value);
		stack_b = stack_b->next;
		i++;
	}
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);
}

void test_push__ntimes_b(void)
{
	t_node	*stack_a = NULL;
	t_node	*stack_b = NULL;
	int		values[] = {5, 4, 6, 10 ,11, 12};
	int		i = 0;

	generate_linked_list(&stack_a, 3, 6 ,4 ,5);
	generate_linked_list(&stack_b, 3, 10 ,11, 12);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);
	push_b(&stack_a, &stack_b);

	while (stack_a)
	{
		TEST_ASSERT_EQUAL_INT(values[i], stack_a->value);
		stack_a = stack_a->next;
		//stack_b = stack_b->next;
		i++;
	}
	deallocate_stack(&stack_a);
	deallocate_stack(&stack_b);
}

int test_operation_push(void)
{
	UNITY_BEGIN();
	RUN_TEST(test_push_a);
	RUN_TEST(test_push_b);
	RUN_TEST(test_push__ntimes_b);
	return UNITY_END();
}
