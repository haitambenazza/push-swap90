/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:51:26 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/05 21:06:21 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	while (stack)
	{
		tmp = stack->next;
		free(stack);
		stack = tmp;
		i++;
	}
}

void	stacks(long *lst, int len, long *table, char **str)
{
	t_stack	*a;
	t_stack	*b;
	t_stack	*node;
	int		i;

	i = 0;
	b = NULL;
	a = NULL;
	while (i < len)
	{
		node = ft_lstnew(lst[i]);
		ft_lstadd_back(&a, node);
		i++;
	}
	ranks(&a, &b);
	free_stack(a);
	free_stack(b);
	free(table);
	free_me(str);
}
