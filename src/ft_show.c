/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 06:10:01 by anroche           #+#    #+#             */
/*   Updated: 2017/09/30 07:47:13 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../wolf.h"

void	ft_show_other(t_indication *id)
{
	if (id->draw_end < 0)
		id->draw_end = VARY;
	id->y = id->draw_end;
	while (id->y < VARY)
	{
		id->color = 0x0096CA2D;
		pixel_put_color(id->x, id->y, id);
		id->color = 0x006281D7;
		pixel_put_color(id->x, VARY - id->y - 1, id);
		id->y++;
	}
}

void	ft_show(t_indication *id)
{
	id->y = id->draw_start;
	while (id->y < id->draw_end)
	{
		if (id->side == 0 && id->ray_dir_x > 0)
			id->color = 0x007F4800;
		if (id->side == 0 && id->ray_dir_x < 0)
			id->color = 0x00BD8D46;
		if (id->side == 1 && id->ray_dir_y > 0)
			id->color = 0x0040411E;
		if (id->side == 1 && id->ray_dir_y < 0)
			id->color = 0x00333333;
		pixel_put_color((int)id->x, (int)id->y, id);
		id->y++;
	}
}
