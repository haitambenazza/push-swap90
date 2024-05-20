/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithms.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 09:27:19 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/06 19:50:56 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rank3(t_stack **stack_a)
{
	int	list[3];

	stack_len(stack_a, list);
	if (list[0] > list[1] && list[1] < list[2] && list[0] < list[2])
		return (sa(stack_a, (*stack_a)->next), 0);
	if (list[0] > list[1] && list[0] > list[2] && list[1] > list[2])
	{
		return (sa(stack_a, (*stack_a)->next), rra(stack_a), 0);
	}
	if (list[0] > list[1] && list[1] < list[2] && list[0] > list[2])
		return (ra(stack_a), 0);
	if (list[0] < list[1] && list[1] > list[2] && list[0] < list[2])
	{
		return (sa(stack_a, (*stack_a)->next), ra(stack_a), 0);
	}
	if (list[0] < list[1] && list[1] > list[2] && list[0] > list[2])
		return (rra(stack_a), 0);
	return (0);
}

void	rank5(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*traverse;
	int		min;
	int		max;
	int		position1;
	int		position2;

	min = min_value((*stack_a));
	max = max_value((*stack_a));
	position1 = position(*stack_a, min);
	position2 = position(*stack_a, max);
	push_b(stack_a, stack_b, min, position1);
	push_b(stack_a, stack_b, max, position2);
	traverse = (*stack_b)->next;
	if ((*stack_b)->n < traverse->n)
		sb(stack_b, (*stack_b)->next);
	rank3(stack_a);
	pa(stack_a, stack_b);
	ra(stack_a);
	pa(stack_a, stack_b);
}

void	rank2(t_stack **stack_a)
{
	t_stack	*tmp;

	tmp = (*stack_a)->next;
	sa(stack_a, (*stack_a)->next);
}

void	rank4(t_stack **stack_a, t_stack **stack_b)
{
	int		min;
	t_stack	*tmp;

	min = min_value(*stack_a);
	tmp = *stack_a;
	while (1)
	{
		if ((*stack_a)->n == min)
		{
			pb(stack_a, stack_b);
			break ;
		}
		ra(stack_a);
	}
	rank3(stack_a);
	pa(stack_a, stack_b);
}

void	ranks(t_stack **stack_a, t_stack **stack_b)
{
	int		len;
	t_stack	*traverse;

	len = 0;
	traverse = (*stack_a);
	while (traverse)
	{
		traverse = traverse->next;
		len++;
	}
	if (len == 2)
		rank2(stack_a);
	else if (len == 3)
		rank3(stack_a);
	else if (len == 4)
		rank4(stack_a, stack_b);
	else if (len == 5)
		rank5(stack_a, stack_b);
	else
	{
		chunks(stack_a, stack_b);
	}
}
