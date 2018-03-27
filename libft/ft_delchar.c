/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 16:36:53 by anroche           #+#    #+#             */
/*   Updated: 2017/02/05 16:18:08 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_delchar(char *str)
{
	int		i;
	int		index;
	int		len;
	char	*ret;

	i = 1;
	index = 0;
	len = ft_strlen(str);
	ret = (char*)malloc(len - 1);
	while (str[i] != '\0')
		ret[index++] = str[i++];
	ret[index] = '\0';
	return (ret);
}
