/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 21:52:28 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/13 23:12:05 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

//#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_node {
	int value;
	int index;
	struct s_node* next;
	struct s_node* prev;
} t_node;

//push_swap.c
int push_swap(int argc, char **argv);
int print_elements(t_node *stack);

//input.c
int validate_input(int argc,char **argv);
void argv_to_stack(int argc, char **argv, t_node **stack_a);

//stack_*.c
int ft_lstadd_end(t_node **lst, t_node *new);
int ft_lstadd_start(t_node **lst, t_node *new);
int ft_lstadd_after(t_node *lst, t_node *new);
t_node	*ft_lstremove_start(t_node **stack);
t_node *ft_lstremove_after(t_node *lst);
t_node *ft_lstremove_end(t_node **lst);
t_node *ft_init_node(int content);
t_node *get_stack_end(t_node *stack);
void deallocate_stack(t_node **stack);

//operation_*.c
void	swap_ss(t_node **stack_a, t_node **stack_b);
void	swap_b(t_node **stack_b);
void	swap_a(t_node **stack_a);
void	rotate_rr(t_node **stack_a, t_node **stack_b);
void	rotate_b(t_node **stack_b);
void	rotate_a(t_node **stack_a);
void	reverse_rotate_rrr(t_node **stack_a, t_node **stack_b);
void	reverse_rotate_b(t_node **stack_b);
void	reverse_rotate_a(t_node **stack_a);
void	push_a(t_node **stack_a, t_node **stack_b);
void	push_b(t_node **stack_a, t_node **stack_b);

//sort.c
void	sort(t_node **stack_a, t_node **stack_b, int size);
void	sort_three(t_node **stack_a);
int		stack_is_sorted(t_node *stack);
//
//void	assign_index(t_node **stack_a, int size);


#endif
