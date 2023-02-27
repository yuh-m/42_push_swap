/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_handler.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 02:56:46 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/27 02:59:59 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

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