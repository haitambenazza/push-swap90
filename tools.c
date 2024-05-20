/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:38:42 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/04 13:44:55 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_order(t_stack *stack)
{
	t_stack	*traverse;
	t_stack	min;

	traverse = stack;
	min.n = stack->n;
	while (traverse)
	{
		if (traverse->n < min.n)
			return (1);
		traverse = traverse->next;
	}
	return (0);
}

int	min_value(t_stack *lst)
{
	int		min;
	t_stack	*traverse;

	traverse = lst;
	min = (lst->n);
	while (traverse)
	{
		if ((traverse->n) < min)
			min = (traverse->n);
		traverse = traverse->next;
	}
	return (min);
}

int	max_value(t_stack *lst)
{
	int		max;
	t_stack	*traverse;

	traverse = lst;
	max = traverse->n;
	while (traverse)
	{
		if (traverse->n > max)
			max = traverse->n;
		traverse = traverse->next;
	}
	return (max);
}

int	len_lst(t_stack *lst)
{
	int		len;
	t_stack	*traverse;

	len = 0;
	traverse = lst;
	while (traverse)
	{
		traverse = traverse->next;
		len++;
	}
	return (len);
}

void	stack_len(t_stack **stack_a, int *list)
{
	t_stack	*traverse;
	int		i;

	i = 0;
	traverse = (*stack_a);
	while (traverse)
	{
		list[i] = traverse->n;
		i++;
		traverse = traverse->next;
	}
}
