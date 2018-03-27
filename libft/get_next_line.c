/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/18 14:17:21 by anroche           #+#    #+#             */
/*   Updated: 2017/06/16 12:59:03 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_read(const int fd, char *stock, int *ret)
{
	char	buf[BUFF_SIZE + 1];
	char	*tmp;

	*ret = read(fd, buf, BUFF_SIZE);
	buf[*ret] = '\0';
	tmp = stock;
	if (!(stock = ft_strjoin(stock, buf)))
		return (NULL);
	ft_strdel(&tmp);
	return (stock);
}

int				ft_end_line(char **line, char **stock)
{
	if (!(*line = ft_strdup(*stock)))
		return (-1);
	ft_bzero(*stock, ft_strlen(*stock));
	return (1);
}

int				get_next_line(const int fd, char **line)
{
	static char		*stock = "";
	int				ret;
	char			*str;

	ret = 1;
	if (!line || fd < 0 || (stock[0] == '\0' && (!(stock = ft_strnew(0)))))
		return (-1);
	while (ret > 0)
	{
		if ((str = ft_strchr(stock, '\n')) != NULL)
		{
			*str = '\0';
			if (!(*line = ft_strdup(stock)))
				return (-1);
			ft_memmove(stock, str + 1, ft_strlen(str + 1) + 1);
			return (1);
		}
		if (!(stock = ft_read(fd, stock, &ret)))
			return (-1);
	}
	ft_strdel(&str);
	if (ret == 0 && ft_strlen(stock))
		ret = ft_end_line(&(*line), &stock);
	return (ret);
}
