/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/27 17:38:40 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 13:23:04 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *src, const char *str, size_t lenght)
{
	size_t		i;

	i = 0;
	while (src[i] == str[i] && i < lenght && src[i] != '\0')
		i++;
	if (i == lenght)
		return ((unsigned char)src[i - 1] - (unsigned char)str[i - 1]);
	return ((unsigned char)src[i] - (unsigned char)str[i]);
}
