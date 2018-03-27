/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/15 17:54:32 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 11:24:47 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *src, int c)
{
	size_t	i;

	i = ft_strlen((char *)src);
	while (i && src[i] != (char)c)
		i--;
	if (src[i] == (char)c)
		return ((char *)&src[i]);
	return (NULL);
}
