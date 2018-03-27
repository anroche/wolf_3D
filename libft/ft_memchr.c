/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 10:05:58 by anroche           #+#    #+#             */
/*   Updated: 2017/01/24 23:09:14 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *src, int c, size_t lenght)
{
	size_t	i;

	i = 0;
	while (i < lenght)
	{
		if (((unsigned char*)src)[i] == (unsigned char)c)
			return ((void*)(src + i));
		i++;
	}
	return (NULL);
}
