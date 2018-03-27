/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hook.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 01:27:11 by anroche           #+#    #+#             */
/*   Updated: 2017/09/30 18:37:32 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../wolf.h"

void	ft_move(t_indication *id)
{
	double speed;

	speed = 0.125;
	if (id->up == 1)
	{
		if (ft_level_map((int)(id->pos_x + id->dir_x * speed), id->pos_y) == 0)
			id->pos_x += id->dir_x * speed;
		if (ft_level_map((int)(id->pos_x), id->pos_y + id->dir_y * speed) == 0)
			id->pos_y += id->dir_y * speed;
	}
	if (id->down == 1)
	{
		if (ft_level_map((int)(id->pos_x - id->dir_x * speed), id->pos_y) == 0)
			id->pos_x -= id->dir_x * speed;
		if (ft_level_map((int)id->pos_x, id->pos_y - id->dir_y * speed) == 0)
			id->pos_y -= id->dir_y * speed;
	}
}

void	ft_rot(t_indication *id)
{
	double rot_speed;
	double old_dir_x;
	double old_plane_x;

	rot_speed = 0.075;
	if (id->left == 1 ^ id->right == 1)
	{
		if (id->right == 1)
			rot_speed = -0.1;
		old_dir_x = id->dir_x;
		id->dir_x = id->dir_x * cos(rot_speed) -
			id->dir_y * sin(rot_speed);
		id->dir_y = old_dir_x * sin(rot_speed) +
			id->dir_y * cos(rot_speed);
		old_plane_x = id->plane_x;
		id->plane_x = id->plane_x * cos(rot_speed) -
			id->plane_y * sin(rot_speed);
		id->plane_y = old_plane_x * sin(rot_speed) +
			id->plane_y * cos(rot_speed);
	}
}

int		keypress(int keycode, t_indication *id)
{
	if (keycode == 126)
		id->up = 1;
	if (keycode == 125)
		id->down = 1;
	if (keycode == 124)
		id->right = 1;
	if (keycode == 123)
		id->left = 1;
	return (keycode);
}

int		keyrelease(int keycode, t_indication *id)
{
	if (keycode == 126)
		id->up = 0;
	if (keycode == 125)
		id->down = 0;
	if (keycode == 124)
		id->right = 0;
	if (keycode == 123)
		id->left = 0;
	if (keycode == 53)
		exit(0);
	return (keycode);
}
