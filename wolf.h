/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wolf.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anroche <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/30 06:28:11 by anroche           #+#    #+#             */
/*   Updated: 2017/09/30 07:25:47 by anroche          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WOLF_H
# define WOLF_H

# include <pthread.h>
# include <stdio.h>
# include "libft/libft.h"
# include "mlx_sierra/mlx.h"
# include <math.h>

# define VARX	2400
# define VARY	1400
# define TX_WIDTH 64
# define TX_HEIGHT 64

typedef struct		s_indication
{
	void			*mlx;
	void			*win;
	void			*img;
	char			*str_img;
	int				bpp;
	int				s_l;
	int				endian;
	int				map_x;
	int				map_y;
	int				x;
	int				x_next;
	int				y;
	double			side_dist_x;
	double			side_dist_y;
	double			delta_dist_x;
	double			delta_dist_y;
	double			perp_wall_dist;
	double			step_x;
	double			step_y;
	double			hit;
	double			side;
	double			pos_x;
	double			pos_y;
	double			dir_x;
	double			dir_y;
	double			plane_x;
	double			plane_y;
	double			time;
	double			oldtime;
	double			camera_x;
	double			camera_y;
	double			ray_pos_x;
	double			ray_pos_y;
	double			ray_dir_x;
	double			ray_dir_y;
	double			line_height;
	double			draw_start;
	double			draw_end;
	int				color;
	int				worldmap;
	char			up;
	char			down;
	char			left;
	char			right;
}					t_indication;

void				phread(t_indication *id);
void				pixel_put_color(int x, int y, t_indication *id);
int					set_image(t_indication *id);
void				ft_display(t_indication *id);
void				*ft_wolf(void *id);
int					keypress(int keycode, t_indication *id);
int					keyrelease(int keycode, t_indication *id);
int					ft_level_map(int map_x, int map_y);
void				ft_init(t_indication *id);
void				ft_p1(t_indication *id);
void				ft_p2(t_indication *id);
void				ft_p3(t_indication *id);
void				ft_p4(t_indication *id);
void				ft_move(t_indication *id);
void				ft_rot(t_indication *id);
void				ft_show(t_indication *id);
void				ft_show_other(t_indication *id);
#endif
