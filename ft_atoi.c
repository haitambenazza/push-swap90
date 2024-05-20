/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:44:49 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/06 18:14:14 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	handler_max_min(char *s, char **str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s[i] && (s[i] == 32 || s[i] == '0'))
		i++;
	while (s[i])
	{
		if (len > 10)
		{
			free_me(str);
			write(2, "Error\n", 6);
			exit(16);
		}
		i++;
		len++;
	}
}

void	handler_memory(char **str)
{
	free_me(str);
	write(2, "Error\n", 6);
	exit(17);
}

int	ft_atoi(char *str, char **v)
{
	int			sign;
	long long	number;
	size_t		i;

	sign = 1;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if ((number * sign) > INT_MAX || (number * sign) < INT_MIN)
		handler_memory(v);
	handler_max_min(str, v);
	return (number * sign);
}
