/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 09:23:37 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 13:25:14 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *src, const void *srt, size_t lenght)
{
	const char *srcbis;
	const char *srtbis;

	srcbis = src;
	srtbis = srt;
	while (lenght--)
	{
		if (*srcbis != *srtbis)
			return ((unsigned char)*srcbis - (unsigned char)*srtbis);
		srcbis++;
		srtbis++;
	}
	return (0);
}
