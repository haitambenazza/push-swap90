/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 17:51:11 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/04 16:48:15 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ascii(char *s1)
{
	size_t	i;
	int		r;

	i = 0;
	r = 0;
	while ((s1[i]))
	{
		r += s1[i];
		i++;
	}
	return (r);
}

int	is_true(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-')
		{
			i++;
			if ((str[i] < '0' || str[i] > '9'))
				return (free(str), write(1, "Error\n", 6), exit(0), 0);
		}
		i++;
	}
	return (0);
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check(char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (str)
		is_true(str);
	while (str[i])
	{
		if ((str[i] < '0' || str[i] > '9') && str[i] != ' ' && str[i] != '+' && \
			str[i] != '-')
			return (free(str), write(1, "Error\n", 6), 0);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			c++;
		i++;
	}
	if (c == 0)
		return (write(1, "Error\n", 6), free(str), 0);
	return (1);
}
