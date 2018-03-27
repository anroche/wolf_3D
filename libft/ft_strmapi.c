/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:17:03 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 09:12:27 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		j;
	size_t	i;

	if (s && f)
	{
		i = 0;
		j = 1 + ft_strlen((char *)s);
		if ((str = (char *)malloc(sizeof(char) * j)) == NULL)
			return (NULL);
		while (s[i] != 0)
		{
			str[i] = f(i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (NULL);
}
