/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ray.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 05:19:47 by anroche           #+#    #+#             */
/*   Updated: 2017/09/30 05:42:27 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../wolf.h"

void	ft_p1(t_indication *id)
{
	id->camera_x = 2 * id->x / (double)VARX - 1;
	id->ray_pos_x = id->pos_x;
	id->ray_pos_y = id->pos_y;
	id->ray_dir_x = id->dir_x + id->plane_x * id->camera_x;
	id->ray_dir_y = id->dir_y + id->plane_y * id->camera_x;
	id->map_x = (int)id->ray_pos_x;
	id->map_y = (int)id->ray_pos_y;
	id->delta_dist_x = sqrt(1 + (id->ray_dir_y * id->ray_dir_y) /
			(id->ray_dir_x * id->ray_dir_x));
	id->delta_dist_y = sqrt(1 + (id->ray_dir_x * id->ray_dir_x) /
			(id->ray_dir_y * id->ray_dir_y));
}

void	ft_p2(t_indication *id)
{
	if (id->ray_dir_x < 0)
	{
		id->step_x = -1;
		id->side_dist_x = (id->ray_pos_x - id->map_x) * id->delta_dist_x;
	}
	else
	{
		id->step_x = 1;
		id->side_dist_x = (id->map_x + 1.0 - id->ray_pos_x) * id->delta_dist_x;
	}
	if (id->ray_dir_y < 0)
	{
		id->step_y = -1;
		id->side_dist_y = (id->ray_pos_y - id->map_y) * id->delta_dist_y;
	}
	else
	{
		id->step_y = 1;
		id->side_dist_y = (id->map_y + 1.0 - id->ray_pos_y) * id->delta_dist_y;
	}
}

void	ft_p3(t_indication *id)
{
	id->hit = 0;
	while (id->hit == 0)
	{
		if (id->side_dist_x < id->side_dist_y)
		{
			id->side_dist_x += id->delta_dist_x;
			id->map_x += id->step_x;
			id->side = 0;
		}
		else
		{
			id->side_dist_y += id->delta_dist_y;
			id->map_y += id->step_y;
			id->side = 1;
		}
		if (ft_level_map(id->map_x, id->map_y) > 0)
			id->hit = 1;
	}
}

void	ft_p4(t_indication *id)
{
	if (id->side == 0)
		id->perp_wall_dist = fabs((id->map_x - id->ray_pos_x +
					(1 - id->step_x) / 2) / id->ray_dir_x);
	else
		id->perp_wall_dist = fabs((id->map_y - id->ray_pos_y +
					(1 - id->step_y) / 2) / id->ray_dir_y);
	id->line_height = abs((int)(VARY / id->perp_wall_dist));
	id->draw_start = (int)-id->line_height / 2 + VARY / 2;
	id->draw_end = (int)id->line_height / 2 + VARY / 2;
	if (id->draw_start < 0)
		id->draw_start = 0;
	if (id->draw_end >= VARY)
		id->draw_end = VARY - 1;
}
