/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:37:08 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/04 15:18:50 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a, t_stack *node)
{
	t_stack	*tmp;

	if (stack_a && node)
	{
		if (!(*stack_a))
		{
			*stack_a = node;
			node->next = NULL;
		}
		else
		{
			tmp = node->next;
			node->next = *stack_a;
			(*stack_a)->next = tmp;
			(*stack_a) = node;
		}
		write(1, "sa\n", 3);
	}
}

void	sb(t_stack **stack_b, t_stack *node)
{
	t_stack	*tmp;

	if (stack_b && node)
	{
		if (!(*stack_b))
		{
			*stack_b = node;
			node->next = NULL;
		}
		else
		{
			tmp = node->next;
			node->next = *stack_b;
			(*stack_b)->next = tmp;
			(*stack_b) = node;
		}
		write(1, "sb\n", 3);
	}
}

void	ss(t_stack **stack_b, t_stack *node, t_stack **stack_a)
{
	sa(stack_a, node->next);
	sb(stack_b, node->next);
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!(*stack_b))
		return ;
	else
	{
		tmp = (*stack_a);
		(*stack_a) = (*stack_b);
		(*stack_b) = (*stack_b)->next;
		(*stack_a)->next = tmp;
		write(1, "pa\n", 3);
	}
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;

	if (!(*stack_a))
		return ;
	else
	{
		tmp = (*stack_b);
		(*stack_b) = (*stack_a);
		(*stack_a) = (*stack_a)->next;
		(*stack_b)->next = tmp;
		write(1, "pb\n", 3);
	}
}
