/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 11:34:04 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 11:16:07 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, char *src, size_t lenght)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = -1;
	while (dst[i] && i < lenght)
		i++;
	k = ft_strlen(src);
	while ((src[++j]) && ((i + j + 1) < lenght))
		dst[i + j] = src[j];
	if (i != lenght)
		dst[i + j] = '\0';
	return (i + k);
}
