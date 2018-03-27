/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 08:58:18 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 10:07:45 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *srt, size_t len)
{
	size_t	i;

	if (*srt == '\0')
		return ((char *)src);
	i = ft_strlen(srt);
	while (*src != '\0' && len-- >= i)
	{
		if (*src == *srt && ft_memcmp(src, srt, i) == 0)
			return ((char *)src);
		src++;
	}
	return (NULL);
}
