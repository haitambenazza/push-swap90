/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbenazza <hbenazza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:40:27 by hbenazza          #+#    #+#             */
/*   Updated: 2024/02/19 21:24:13 by hbenazza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char *s, int start, int len)
{
	char		*str;
	int			i;

	i = 0;
	if (!s || start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	str = (char *)malloc(sizeof(char) * (len + 1));
	callo(str, len + 1);
	if (!(str))
		return (NULL);
	while (len > i && s[start + i])
	{
		str[i] = (char)s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
