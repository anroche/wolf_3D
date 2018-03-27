/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_word.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/20 13:42:53 by anroche           #+#    #+#             */
/*   Updated: 2017/06/16 12:39:45 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_word(const char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	if (str[i] == '\0')
		return (0);
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		word = 1;
	}
	while (str[i] != '\0')
	{
		if (str[i] == c && str[i + 1] != c && str[i + 1] != '\0')
			word++;
		i++;
	}
	return (word);
}
