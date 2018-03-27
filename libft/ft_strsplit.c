/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:53:02 by anroche           #+#    #+#             */
/*   Updated: 2016/11/28 13:23:51 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		word;
	char	**str;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	word = ft_count_word(s, c);
	if ((str = (char **)malloc(sizeof(char *) * (word + 1))) == NULL)
		return (NULL);
	while (s[i] == c && s[i] != '\0')
		i++;
	while (j < word && s[i] != '\0')
	{
		str[j] = ft_split_sentence(s, c, &i);
		j++;
		while (s[i] == c && s[i] != '\0')
			i++;
	}
	str[j] = 0;
	return (str);
}
