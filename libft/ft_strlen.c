/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 12:44:00 by anroche           #+#    #+#             */
/*   Updated: 2017/05/22 15:31:34 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	int lenght;

	lenght = 0;
	if (s == NULL)
		return (0);
	while (s[lenght] != '\0')
		lenght++;
	return (lenght);
}
