/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <fmota@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 18:28:12 by fmota             #+#    #+#             */
/*   Updated: 2021/02/08 18:28:12 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t dsize;

	dsize = 0;
	while (dest[dsize] != '\0' && dsize < size)
		dsize++;
	i = dsize;
	while (src[dsize - i] && dsize + 1 < size)
	{
		dest[dsize] = src[dsize - i];
		dsize++;
	}
	if (i < size)
		dest[dsize] = '\0';
	return (i + ft_strlen(src));
}