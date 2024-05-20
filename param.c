/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   param.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 13:20:25 by hbenazza          #+#    #+#             */
/*   Updated: 2024/03/06 19:58:30 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order(long *lst, int len, char **str)
{
	int		i;
	int		j;
	long	min;

	i = 0;
	while (i < len)
	{
		min = lst[i];
		j = i + 1;
		while (j < len)
		{
			if (min > lst[j])
				return ;
			j++;
		}
		i++;
	}
	free(lst);
	free_me(str);
	exit(3);
}

void	is_listed(long *lst, int len, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		j = 0;
		while (j < len)
		{
			if (lst[i] == lst[j] && j != i)
			{
				free(lst);
				free_me(str);
				write(2, "Error\n", 6);
				exit(4);
			}
			j++;
		}
		i++;
	}
}

void	free_me(char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

void	param_handler(char **v, int c)
{
	char	*p;
	char	**pl;
	long	*table;
	int		len;

	len = 0;
	p = ft_strjoin(c, v, " ");
	if (!check(p))
		exit(0);
	pl = ft_split(p, ' ');
	free(p);
	while (pl[len])
		len++;
	table = malloc(sizeof(long) * len);
	if (!table)
		exit(0);
	len = 0;
	while (pl[len])
	{
		table[len] = ft_atoi(pl[len], pl);
		len++;
	}
	is_listed(table, len, pl);
	order(table, len, pl);
	stacks(table, len, table, pl);
}
