/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:28:51 by hbenazza          #+#    #+#             */
/*   Updated: 2024/02/20 16:09:36 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count(char *str, char ch)
{
	size_t	how_much;
	size_t	i;

	how_much = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && str[i] == ch)
			i++;
		if (str[i])
		{
			how_much++;
			while (str[i] && str[i] != ch)
				i++;
		}
	}
	return (how_much);
}

static size_t	lenght(char *str, char c)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (str[i] && str[i] == c)
		i++;
	while (str[i] && str[i] != c)
	{
		len++;
		i++;
	}
	return (len);
}

static char	**splitor(char *s, char c, char **arr, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (len > i)
	{
		while (s[j] && s[j] == c)
			j++;
		arr[i] = ft_substr(s, j, (lenght(s + j, c)));
		if (!arr[i])
		{
			free(s);
			exit(0);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}

char	**ft_split(char *s, char c)
{
	size_t	words;
	char	**list;

	if (s == NULL)
		return (NULL);
	words = count(s, c);
	list = (char **)malloc(sizeof(char *) * (words + 1));
	if (!list)
		exit(0);
	list = splitor(s, c, list, words);
	return (list);
}
