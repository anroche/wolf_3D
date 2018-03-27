/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charconcat.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 11:32:08 by anroche           #+#    #+#             */
/*   Updated: 2017/02/05 16:26:37 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_charconcat(char *src, char c)
{
	char	*dest;
	int		i;

	i = 0;
	dest = (char*)malloc(sizeof(ft_strlen(src) + 2));
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = c;
	dest[i] = '\0';
	return (dest);
}
