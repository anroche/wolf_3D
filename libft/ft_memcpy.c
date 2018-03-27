/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 22:03:40 by anroche           #+#    #+#             */
/*   Updated: 2016/11/27 12:04:58 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t lenght)
{
	char		*dst;
	const char	*str;

	dst = dest;
	str = src;
	while (lenght)
	{
		*dst++ = *str++;
		lenght--;
	}
	return (dest);
}
