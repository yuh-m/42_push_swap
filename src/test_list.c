/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 22:00:30 by eryudi-m          #+#    #+#             */
/*   Updated: 2022/12/17 22:58:49 by eryudi-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//code based on this video - https://www.youtube.com/watch?v=VOpjAHCee7c

#include "../inc/push_swap.h"

struct node {
	int value;
	struct node* next;
};
typedef struct node t_node;

void print_list (t_node *head)
{
	t_node *temporary = head;

	while (temporary != NULL)
	{
		ft_printf("%d - ", temporary->value);
		temporary = temporary ->next;
	}
	ft_printf("\n");
}

t_node *create_node(int value)
{
	t_node *result = malloc(sizeof(t_node));
	result->value = value;
	result->next = NULL;
	return (result);
}

t_node *insert_head (t_node **head, t_node *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return node_to_insert;
}

t_node *find_node (t_node *head, int value)
{
	t_node *tmp = head;
	while (tmp != NULL)
	{
		if (tmp->value == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

void *insert_after_node(t_node *node_to_insert_after, t_node *new_node)
{
	new_node->next = node_to_insert_after->next;
	node_to_insert_after->next = new_node;
	return NULL;
}

int push_swap(int argc, char **argv)
{
	//parse values of argv
	//it should check if all arguments are int
	// what to do in case of 1 2 " " 3
	t_node *tmp;
	t_node *head = NULL;
	int i = 0;

	while (i < 10)
	{
		tmp = create_node(i);
		insert_head(&head,tmp);
		i++;
	}
	tmp = find_node (head, 7);
	ft_printf("node found = %d \n\n", tmp->value);

	insert_after_node(tmp, create_node(355));

	print_list(head);
	ft_printf("argc %d argv %s /n", argc, argv[0]);
	return (0);
}
