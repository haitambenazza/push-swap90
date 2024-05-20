/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 20:39:37 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/05 13:58:40 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack_a)
{
	t_stack	*traverse;
	t_stack	*tmp;
	t_stack	*lst;

	if (!(*stack_a))
		return ;
	traverse = (*stack_a);
	lst = (*stack_a);
	while (traverse->next)
	{
		tmp = traverse;
		traverse = traverse->next;
		if (!traverse)
			break ;
	}
	(*stack_a) = traverse;
	tmp->next = NULL;
	(*stack_a)->next = lst;
	write(1, "rra\n", 4);
}
