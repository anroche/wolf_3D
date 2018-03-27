/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 13:00:14 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 14:23:12 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t lenght)
{
	if (dst <= src)
		return (ft_memcpy(dst, src, lenght));
	if (dst > src)
		return (ft_memcpy_rev(dst, src, lenght));
	return (dst);
}
