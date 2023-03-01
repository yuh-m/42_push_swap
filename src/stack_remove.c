/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 03:28:47 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/28 07:27:49 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

//remove the first element of a doubly linked list and return it
t_node	*ft_lstremove_start(t_node **lst)
{
	t_node *temp;

	temp = *lst;
	if (*lst)
	{
		*lst = (*lst)->next;
		(*lst)->prev = NULL;
	}
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
	return (temp);
}
