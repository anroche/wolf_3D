/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/16 15:09:56 by anroche           #+#    #+#             */
/*   Updated: 2016/11/26 11:34:12 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *src)
{
	int i;
	int res;
	int neg;

	res = 0;
	neg = 0;
	i = 0;
	while ((src[i] == '\n') || (src[i] == '\t') || (src[i] == '\v') ||
			(src[i] == ' ') || (src[i] == '\f') || (src[i] == '\r'))
		i++;
	if (src[i] == '-')
		neg = 1;
	if (src[i] == '+' || src[i] == '-')
		i++;
	while (src[i] && (src[i] >= '0') && (src[i] <= '9'))
	{
		res *= 10;
		res += (int)src[i] - '0';
		i++;
	}
	if (neg == 1)
		return (-res);
	else
		return (res);
}
