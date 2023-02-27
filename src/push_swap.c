/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 20:12:44 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/27 01:53:27 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void deallocate_stack(t_node **stack)
{
	t_node *temp;

	while (*stack)
	{
		temp = *stack;
		*stack = (*stack)->next;
		free(temp);
	}
	*stack = NULL;
}

//initialize a new node
t_node *ft_init_node(int content)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit (1);
	new->value = content;
	new->next = NULL;
	new->prev = NULL;
	return (new);
}

//Add a new node after the given node
int ft_lstadd_after(t_node *lst, t_node *new)
{
	if (!lst || !new)
		return (0);
	new->next = lst->next;
	new->prev = lst;
	if (lst->next)
		lst->next->prev = new;
	lst->next = new;
	return (1);
}

//Add a new node at the beginning of the list
int ft_lstadd_start(t_node **lst, t_node *new)
{
	if (!lst || !new)
		exit (1);
	new->next = *lst;
	new->prev = NULL;
	if (*lst)
		(*lst)->prev = new;
	*lst = new;
	return (1);
}

//Add a new node at the end of the list
int ft_lstadd_end(t_node **lst, t_node *new)
{
	t_node *temp;

	if (!lst || !new)
		return (0);
	if (!*lst)
	{
		*lst = new;
		return (1);
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (1);
}


int push_swap(int argc, char **argv)
{
	t_node	*stack_a;
	t_node	*stack_b;
	
	validate_input(argc, argv);
	stack_a = NULL;
	argv_to_stack(argc, argv, &stack_a);


	//stack_a = NULL; 
	stack_b = NULL;
	deallocate_stack(&stack_a);

	return (0);
}