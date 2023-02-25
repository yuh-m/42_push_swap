/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 15:37:20 by eryudi-m          #+#    #+#             */
/*   Updated: 2023/02/25 15:44:28 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//initiate a linked list
t_node *init_list(int content)
{
	t_node *new;

	new = malloc(sizeof(t_node));
	if (!new)
		return (0);
	new->value = content;
	new->next = NULL;
	return (new);
}

//add element to linked list
int ft_lstadd_back(t_node **lst, t_node *new)
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