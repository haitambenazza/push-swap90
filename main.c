/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:31:03 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/05 15:18:35 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	only_space(char *str)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			c++;
		i++;
	}
	if (c == 0)
	{
		write(2, "Error\n", 6);
		exit(7);
	}
}

void	is_empty(char **v)
{
	int	i;

	i = 1;
	while (v[i])
	{
		only_space(v[i]);
		i++;
	}
}

int	main(int c, char **v)
{
	if (c >= 2)
	{
		is_empty(v);
		param_handler(v, c);
	}
	return (0);
}
