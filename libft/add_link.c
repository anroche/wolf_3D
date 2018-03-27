/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/02 14:11:21 by anroche           #+#    #+#             */
/*   Updated: 2016/12/02 16:30:26 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*add_link(t_list **list, void *data)
{
	t_list *tmp;

	if ((tmp = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	tmp->content = data;
	tmp->content_size = sizeof(data);
	tmp->next = *list;
	return (tmp);
}
