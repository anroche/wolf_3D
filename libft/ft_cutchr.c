/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cutchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 21:12:57 by anroche           #+#    #+#             */
/*   Updated: 2017/02/05 16:25:35 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cutchr(char *str, char c)
{
	int		i;
	int		len;
	int		index;
	char	*ret;

	i = 0;
	index = 0;
	len = ft_strlen(str);
	while (str[i] != c)
		i++;
	ret = (char*)malloc(len - i);
	i++;
	while (str[i] != '\0')
		ret[index++] = str[i++];
	ret[index] = '\0';
	return (ret);
}
