/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_sentence.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 15:37:44 by anroche           #+#    #+#             */
/*   Updated: 2016/11/28 13:36:54 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_split_sentence(const char *src, char c, int *i)
{
	char	*str;
	int		j;

	str = NULL;
	j = 0;
	if ((str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1))) == NULL)
		return (NULL);
	while (src[*i] != c && src[*i] != '\0')
	{
		str[j] = src[*i];
		j++;
		*i += 1;
	}
	str[j] = '\0';
	return (str);
}
