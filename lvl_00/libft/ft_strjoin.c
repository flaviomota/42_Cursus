/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <fmota@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:15:50 by fmota             #+#    #+#             */
/*   Updated: 2021/02/15 12:15:50 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_join(char const *s1, char const *s2, char *c)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (s1[x])
	{
		c[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		c[x + y] = s2[y];
		y++;
	}
	c[x + y] = '\0';
	return (c);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	char *join;
	int len;

	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	if (!s1 && !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	if ((!(join = (char *)malloc(sizeof(char) * len + 1))))
		return (NULL);
	join = ft_join(s1, s2, join);
	return (join);
}