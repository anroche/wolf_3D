/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 18:50:17 by anroche           #+#    #+#             */
/*   Updated: 2017/02/07 13:38:38 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strconcat(char *src1, char *src2)
{
	int		len;
	int		i;
	int		j;
	char	*dest;

	len = ft_strlen(src1) + ft_strlen(src2);
	i = 0;
	j = 0;
	dest = (char*)malloc(len + 1);
	if (src1 != NULL)
	{
		while (src1[i] != '\0')
		{
			dest[i] = src1[i];
			i++;
		}
	}
	if (src2 != NULL)
	{
		while (src2[j] != '\0')
			dest[i++] = src2[j++];
	}
	dest[i] = '\0';
	free(src1);
	return (dest);
}
