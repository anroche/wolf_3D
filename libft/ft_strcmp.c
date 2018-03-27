/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 12:16:30 by anroche           #+#    #+#             */
/*   Updated: 2016/11/30 13:06:19 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *src, const char *str)
{
	while (*src == *str && *src != '\0')
	{
		src++;
		str++;
	}
	return ((unsigned char)*src - (unsigned char)*str);
}
