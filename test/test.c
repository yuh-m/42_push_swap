/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 05:50:28 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/18 21:46:16 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"
#include "unity/src/unity.h"

int test_operation_swap(void);

int main(void)
{
	ft_printf("Testing operation_swap.c\n");
	test_operation_swap();
	ft_printf("Testing operation_swap.c: OK\n");

	ft_printf("Testing operation_rotate.c\n");
	return (0);
}
