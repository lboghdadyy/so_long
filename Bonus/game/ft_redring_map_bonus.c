/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_redring_map_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:24:27 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 19:43:06 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_initialisation(t_point *s)
{
	s->width = ft_strlen(s->map[0]) * 100;
	s->height = ft_size_array(s->map) * 100;
	s->mlx = mlx_init();
	if (!s->mlx)
		ft_error("Error : something is wrong with MLX!\n", s);
	s->win = mlx_new_window(s->mlx, s->width, s->height, "Sooooooo_long");
	if (!s->win)
		ft_exit_game(s);
	s->coins = ft_how_many(s->map, 'C');
	s->moves = 0;
	(1) && (s->wall = NULL, s->plr_r = NULL, s->plr_l = NULL, s->plr_d = NULL);
	(1) && (s->plr_u = NULL, s->coin = NULL, s->exit_c = NULL);
	s->direction = 'R';
	s->exit_o = NULL;
	ft_load_img(s);
}

void	draw_img(t_point *s, int x, int y)
{
	if (s->map[y][x] == '1')
		mlx_put_image_to_window(s->mlx, s->win, s->wall, x * 100, y * 100);
	else if (s->map[y][x] == '0')
		mlx_put_image_to_window(s->mlx, s->win, s->space, x * 100, y * 100);
	else if (s->map[y][x] == 'P')
		ft_draw_player(s, x, y);
	else if (s->map[y][x] == 'C')
		mlx_put_image_to_window(s->mlx, s->win, s->coin, x * 100, y * 100);
	else if (s->map[y][x] == 'E')
		mlx_put_image_to_window(s->mlx, s->win, s->exit_c, x * 100, y * 100);
	else if (s->map[y][x] == 'N')
		mlx_put_image_to_window(s->mlx, s->win, s->t_enemy, x * 100, y * 100);
}

void	ft_put_image(t_point *s)
{
	int	x;
	int	y;

	y = 0;
	while (s->map[y])
	{
		x = 0;
		while (s->map[y][x])
		{
			draw_img(s, x, y);
			x++;
		}
		y++;
	}
}

int	ft_close(t_point *s)
{
	ft_exit_game(s);
	return (1);
}

void	ft_render_map(t_point *s)
{
	ft_initialisation(s);
	ft_put_image(s);
	mlx_key_hook(s->win, key_hook, s);
	mlx_hook(s->win, 17, 0, ft_close, s);
	mlx_loop_hook(s->mlx, ft_move_enemy, s);
	mlx_loop(s->mlx);
}
