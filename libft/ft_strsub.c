/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:54:27 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 09:11:30 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	if ((ret = (char*)malloc(len + 1)) == NULL)
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		ret[i] = ((char*)s)[start + i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
