/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 08:52:09 by anroche           #+#    #+#             */
/*   Updated: 2016/11/29 14:27:23 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	char	*srt;
	char	*ret;

	ret = (char*)dst;
	srt = (char*)src;
	i = 0;
	while (i < n)
	{
		ret[i] = srt[i];
		if (srt[i] == c)
			return (ret + i + 1);
		i++;
	}
	return (NULL);
}
