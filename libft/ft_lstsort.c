/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 16:54:30 by anroche           #+#    #+#             */
/*   Updated: 2016/12/03 10:54:12 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_cmp(char *src, char *str)
{
	while (*src == *str && *src != '\0')
	{
		src++;
		str++;
	}
	return ((unsigned char)*src - (unsigned char)*str);
}

void		ft_lstsort(t_list **list)
{
	t_list **tmp;

	tmp = (t_list**)malloc(sizeof(list));
	tmp = list;
	while ((*list)->next)
	{
		if (ft_cmp((*list)->content, ((*list)->next)->content) > 0)
		{
			ft_swap(&((*list)->content), &((*list)->next)->content);
			list = tmp;
		}
		list = &(*list)->next;
	}
}
