/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_image.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 14:58:23 by anroche           #+#    #+#             */
/*   Updated: 2018/02/19 13:46:50 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../wolf.h"
#include <pthread.h>

void	pixel_put_color(int x, int y, t_indication *id)
{
	unsigned long long	index;
	int					*ptr;

	if (x >= 0 && x < VARX && y >= 0 && y < VARY)
	{
		index = y * id->s_l + x * id->bpp / 8;
		ptr = (int*)&id->str_img[index];
		*ptr = id->color;
	}
}

int		ft_stop(void)
{
	exit(1);
	return (0);
}

void	phread(t_indication *id)
{
	t_indication	tab[8];
	pthread_t		t[8];
	int				i;

	i = 0;
	while (i < 8)
	{
		ft_memcpy((void*)&tab[i], (void*)id, sizeof(t_indication));
		tab[i].x = 300 * i;
		tab[i].x_next = 300 * (i + 1);
		i++;
	}
	i = 0;
	while (++i <= 8)
		pthread_create(&t[i - 1], NULL, wheel, &tab[i - 1]);
	while (i--)
		pthread_join(t[i], NULL);
}

int		set_image(t_indication *id)
{
	id->img = mlx_new_image(id->mlx, VARX, VARY);
	id->str_img = mlx_get_data_addr(id->img, &(id->bpp),
			&(id->s_l), &(id->endian));
	ft_move(id);
	ft_rot(id);
	phread(id);
	mlx_clear_window(id->mlx, id->win);
	mlx_put_image_to_window(id->mlx, id->win, id->img, 0, 0);
	mlx_destroy_image(id->mlx, id->img);
	return (0);
}
