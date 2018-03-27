/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 18:07:58 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 10:15:59 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *src, const char *srt)
{
	int i;
	int index;

	index = 0;
	if (*srt == '\0')
		return ((char*)src);
	while (src[index] != '\0')
	{
		i = 0;
		while (src[index + i] == srt[i])
		{
			i++;
			if (srt[i] == '\0')
				return ((char *)&src[index]);
		}
		index++;
	}
	return (NULL);
}
