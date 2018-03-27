/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 12:58:33 by anroche           #+#    #+#             */
/*   Updated: 2016/11/28 16:49:44 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	void	*ret;

	if ((ret = (char*)malloc(size + 1)) == NULL)
		return (NULL);
	ft_memset(ret, '\0', size + 1);
	return (ret);
}
