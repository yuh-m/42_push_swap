/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:50:28 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/19 03:46:00 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "unity/src/unity.h"

int test_operation_swap(void);
int test_operation_rotate(void);
int test_operation_rrotate(void);
int test_operation_push(void);

int main(void)
{
	ft_printf("Testing operation_swap.c\n");
	test_operation_swap();

	ft_printf("Testing operation_rotate.c\n");
	test_operation_rotate();

	ft_printf("Testing operation_reverse_rotate.c\n\n");
	test_operation_rrotate();

	ft_printf("Testing operation_push.c\n");
	test_operation_push();

	return (0);
}
