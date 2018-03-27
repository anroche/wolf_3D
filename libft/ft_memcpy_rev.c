/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy_rev.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 13:43:40 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 14:22:32 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy_rev(void *dest, const void *src, size_t lenght)
{
	char		*dst;
	const char	*str;

	dst = dest;
	str = src;
	while (lenght--)
		dst[lenght] = str[lenght];
	return (dest);
}
