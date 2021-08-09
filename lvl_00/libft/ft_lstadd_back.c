/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmota <fmota@student.42lisboa.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 13:52:18 by fmota             #+#    #+#             */
/*   Updated: 2021/02/15 13:52:18 by fmota            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;

	tmp = *lst;
	if (!tmp)
		*lst = new;
	else
	{
		while ((tmp)->next)
			tmp = tmp->next;
		tmp->next = new;
	}
}