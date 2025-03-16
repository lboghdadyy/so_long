/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:36:46 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:38:41 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_check_player_images(t_point *s)
{
	if (s->plr_d)
		mlx_destroy_image(s->mlx, s->plr_d);
	if (s->plr_r)
		mlx_destroy_image(s->mlx, s->plr_r);
	if (s->plr_u)
		mlx_destroy_image(s->mlx, s->plr_u);
	if (s->plr_l)
		mlx_destroy_image(s->mlx, s->plr_l);
}

void	ft_destroy_collections(t_point *s)
{
	if (s->c_1)
		mlx_destroy_image(s->mlx, s->c_1);
	if (s->c_2)
		mlx_destroy_image(s->mlx, s->c_2);
	if (s->c_3)
		mlx_destroy_image(s->mlx, s->c_3);
}

void	ft_exit_game(t_point *s)
{
	if (!s || !s->mlx)
		return ;
	if (s->wall)
		mlx_destroy_image(s->mlx, s->wall);
	if (s->space)
		mlx_destroy_image(s->mlx, s->space);
	if (s->exit_o)
		mlx_destroy_image(s->mlx, s->exit_o);
	if (s->coin)
		mlx_destroy_image(s->mlx, s->coin);
	if (s->exit_c)
		mlx_destroy_image(s->mlx, s->exit_c);
	if (s->t_enemy)
		mlx_destroy_image(s->mlx, s->t_enemy);
	if (s->win)
		mlx_destroy_window(s->mlx, s->win);
	ft_check_player_images(s);
	ft_destroy_collections(s);
	mlx_destroy_display(s->mlx);
	free(s->mlx);
	ft_error(NULL, s);
}

void	ft_open_exit(t_point *s)
{
	int	y;
	int	x;

	y = 0;
	while (s->map[y])
	{
		x = 0;
		while (s->map[y][x])
		{
			if (s->map[y][x] == 'E')
			{
				mlx_put_image_to_window(s->mlx, s->win, s->exit_o,
					x * 100, y * 100);
				return ;
			}
			x++;
		}
		y++;
	}
}

int	key_hook(int key_code, t_point *s)
{
	if (key_code == ESC)
		ft_exit_game(s);
	if (key_code == ARROW_UP)
		ft_up(s);
	if (key_code == ARROW_DOWN)
		ft_down(s);
	if (key_code == ARROW_LEFT)
		ft_left(s);
	if (key_code == ARROW_RIGHT)
		ft_right(s);
	return (0);
}
