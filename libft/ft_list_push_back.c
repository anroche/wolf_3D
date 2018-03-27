/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 17:40:59 by anroche           #+#    #+#             */
/*   Updated: 2017/08/09 17:41:04 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, int *data)
{
	t_list *current;

	current = *begin_list;
	if (current == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		while (current->next)
			current = current->next;
		current->next = ft_create_elem(data);
	}
}
