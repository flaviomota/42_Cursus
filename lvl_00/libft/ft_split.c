/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <fmota@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 14:23:05 by fmota             #+#    #+#             */
/*   Updated: 2021/02/10 14:23:05 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int count_words(char const *str, char c)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == c))
			i++;
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char *malloc_word(char const *str, char c)
{
	char *word;
	int i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i = 0;
	while (str[i] && str[i] != c)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char **ft_split(char const *s, char c)
{
	char **tab;
	int x;
	int y;

	if (!s)
		return (NULL);
	if (!(tab = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	x = 0;
	y = 0;
	while (s[x])
	{
		while (s[x] && (s[x] == c))
			x++;
		if (s[x] && s[x] != c)
		{
			tab[y] = malloc_word(s + x, c);
			y++;
			while (s[x] && s[x] != c)
				x++;
		}
	}
	tab[y] = NULL;
	return (tab);
}