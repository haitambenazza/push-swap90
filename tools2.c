/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:42:53 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/04 15:26:21 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	position_index(t_stack *stack, int num)
{
	int		position;
	t_stack	*traverse;

	traverse = stack;
	position = 0;
	while (traverse)
	{
		if (traverse->i == num)
			return (position);
		position++;
		traverse = traverse->next;
	}
	return (position);
}

int	*get_list(t_stack *stack_a, int len)
{
	int		i;
	int		*lst;
	t_stack	*tmp;

	i = 0;
	lst = malloc(sizeof(int) * len);
	if (!lst)
		exit(8);
	tmp = stack_a;
	while (tmp)
	{
		lst[i] = tmp->n;
		tmp = tmp->next;
		i++;
	}
	return (lst);
}

void	sort_list(int *lst, int len)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < len - 1)
	{
		j = 0;
		while (j < len - 1)
		{
			if (((lst)[j] > (lst)[j + 1]) && (j < len - 1))
			{
				tmp = (lst)[j];
				(lst)[j] = (lst)[j + 1];
				(lst)[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	indexing(t_stack **lst, int *arr, int len)
{
	t_stack	*traverse;
	int		i;

	traverse = *lst;
	while (traverse)
	{
		i = 0;
		while (i < len)
		{
			if (traverse->n == arr[i])
				traverse->i = i;
			i++;
		}
		traverse = traverse->next;
	}
}

int	position(t_stack *stack, int num)
{
	int		position;
	t_stack	*traverse;

	traverse = stack;
	position = 0;
	while (traverse)
	{
		if (traverse->n == num)
			return (position);
		position++;
		traverse = traverse->next;
	}
	return (position);
}
