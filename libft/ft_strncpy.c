/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 14:13:09 by anroche           #+#    #+#             */
/*   Updated: 2016/11/26 11:58:27 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t lenght)
{
	int i;

	i = 0;
	while ((src[i] != '\0') && (lenght))
	{
		dest[i] = src[i];
		i++;
		lenght--;
	}
	while (lenght)
	{
		dest[i] = '\0';
		i++;
		lenght--;
	}
	return (dest);
}
