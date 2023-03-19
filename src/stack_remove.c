/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:28:47 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/19 02:53:45 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//remove the first element of a doubly linked list and return it
t_node	*ft_lstremove_start(t_node **lst)
{
	t_node *temp;

	temp = *lst;
	if ((*lst)->next)
	{
		*lst = (*lst)->next;
		if (*lst)
			(*lst)->prev = NULL;
	}
	temp->next = NULL;
	temp->prev = NULL;
	return (temp);
}

t_node *ft_lstremove_end(t_node **lst)
{
	t_node *temp;

	temp = get_stack_end(*lst);
	if (temp->prev)
		temp->prev->next = NULL;
	return (temp);
}

t_node *ft_lstremove_after(t_node *lst)
{
	t_node *temp;

	temp = lst->next;
	if (lst->next)
	{
		lst->next = lst->next->next;
		if (lst->next)
			lst->next->prev = lst;
	}
	temp->prev = NULL;
	temp->next = NULL;
	return (temp);
}
