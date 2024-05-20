/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 21:18:58 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/06 20:18:50 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunks(t_stack **stack_a, t_stack **stack_b)
{
	int	len;
	int	chunks;
	int	*lst;

	(void)stack_b;
	len = len_lst(*stack_a);
	if (len <= 100)
		chunks = (len * 10) / 100;
	if (len >= 500)
		chunks = (len * 6) / 100;
	lst = get_list(*stack_a, len);
	sort_list(lst, len);
	indexing(stack_a, lst, len);
	to_b(stack_a, stack_b, chunks);
	to_a(stack_a, stack_b);
	free(lst);
}
