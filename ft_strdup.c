/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:55:17 by hbenazza          #+#    #+#             */
/*   Updated: 2024/02/19 21:23:58 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(char *s1)
{
	size_t	i;
	char	*p;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (s1[i])
	{
		p[i] = ((char *)s1)[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
