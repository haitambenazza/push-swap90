/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 11:20:13 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/04 14:14:10 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*traverse;

	if (lst && new)
	{
		if (!(*lst))
		{
			*lst = new;
			new->next = NULL;
			return ;
		}
		traverse = *lst;
		while (traverse->next)
		{
			traverse = traverse->next;
		}
		traverse->next = new;
	}
}
