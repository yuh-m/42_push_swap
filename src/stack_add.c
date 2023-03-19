/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 02:56:46 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/03/19 01:40:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"


//Add a new node after the given node
int ft_lstadd_after(t_node *lst, t_node *new)
{
	if (!lst || !new)
		exit (1);
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
	new->prev = NULL;
	if (*lst)
	{
		(*lst)->prev = new;
		new->next = *lst;
		*lst = new;
	}
	else{
		*lst = new;
	}

	return (1);
}

//Add a new node at the end of the list
int ft_lstadd_end(t_node **lst, t_node *new)
{
	t_node *temp;

	if (!lst || !new)
		exit (1);
	if (!*lst)
	{
		*lst = new;
		return (1);
	}
	temp = *lst;
	while (temp->next)
		temp = temp->next;
	new->prev = temp;
	temp->next = new;
	return (1);
}

