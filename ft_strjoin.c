/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 02:22:39 by hbenazza          #+#    #+#             */
/*   Updated: 2024/02/19 21:19:09 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strcat(char *s1, char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = ft_strlen(s1);
	while (s2[i])
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

void	callo(char *str, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		str[j] = 0;
		j++;
	}
}

char	*new_str(char *seperator, int size, int t, char **strs)
{
	int		i;
	char	*str;

	i = 1;
	if (size == 0)
		t = 1;
	str = malloc(t + 1);
	if (!str)
		return (NULL);
	callo(str, t + 1);
	str[0] = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		if (i < size - 1)
			str = ft_strcat(str, seperator);
		i++;
	}
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		total;
	char	*sentence;

	total = 0;
	i = 1;
	while (i < size)
	{
		total = total + ft_strlen(strs[i]);
		i++;
	}
	total = total + (size - 1) * ft_strlen(sep);
	sentence = new_str(sep, size, total, strs);
	return (sentence);
}
