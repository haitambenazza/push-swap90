/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:41:05 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/06 12:12:16 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_b(t_stack **stack_a, t_stack **stack_b)
{
	pb(stack_a, stack_b);
	rb(stack_b);
}

void	to_b(t_stack **stack_a, t_stack **stack_b, int chunks)
{
	t_stack	*tmp;
	int		i;
	int		len;

	len = len_lst(*stack_a);
	i = 0;
	while (*stack_a)
	{
		tmp = *stack_a;
		if (tmp->i <= i)
		{
			send_b(stack_a, stack_b);
			i++;
		}
		else if (tmp->i <= (i + chunks))
		{
			pb(stack_a, stack_b);
			i++;
		}
		if (tmp->i > (i + chunks))
			rra(stack_a);
	}
}

void	to_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*tmp;
	int		max;
	int		pos;
	int		len;

	while (*stack_b)
	{
		tmp = *stack_b;
		max = max_value(tmp);
		pos = position(*stack_b, max);
		len = len_lst(*stack_b);
		if (max == tmp->n)
			pa(stack_a, stack_b);
		if (pos <= (len / 2))
			rb(stack_b);
		else if (pos > (len / 2))
			rrb(stack_b);
	}
}

void	push_b(t_stack **stack_a, t_stack **stack_b, int n, \
		int position)
{
	int		len;

	len = len_lst(*stack_a);
	while (1)
	{
		if ((*stack_a)->n == n)
		{
			pb(stack_a, stack_b);
			return ;
		}
		if (position <= len / 2)
			ra(stack_a);
		else
			rra(stack_a);
	}
}
