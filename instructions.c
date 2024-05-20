/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/* s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 09:07:12 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/04 15:17:17 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_stack **stack_b)
{
	t_stack	*traverse;
	t_stack	*tmp;
	t_stack	*lst;

	if (!(*stack_b))
		return ;
	traverse = (*stack_b);
	lst = (*stack_b);
	while (traverse->next)
	{
		tmp = traverse;
		traverse = traverse->next;
		if (!traverse)
			break ;
	}
	(*stack_b) = traverse;
	tmp->next = NULL;
	(*stack_b)->next = lst;
	write(1, "rrb\n", 4);
}

void	ra(t_stack **stack_a)
{
	t_stack	*traverse;
	t_stack	*tmp;

	if (!(*stack_a))
		return ;
	traverse = *stack_a;
	tmp = (*stack_a);
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = tmp;
	(*stack_a) = (*stack_a)->next;
	tmp->next = NULL;
	write(1, "ra\n", 3);
}

void	rb(t_stack **stack_b)
{
	t_stack	*traverse;
	t_stack	*tmp;

	if (!(*stack_b))
		return ;
	traverse = *stack_b;
	tmp = *stack_b;
	while (traverse->next)
		traverse = traverse->next;
	traverse->next = (*stack_b);
	(*stack_b) = (*stack_b)->next;
	tmp->next = NULL;
	write(1, "rb\n", 3);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a);
	rb(stack_b);
}
