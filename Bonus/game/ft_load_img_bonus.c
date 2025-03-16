/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_img_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:45:47 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:59:37 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_load_coins(t_point	*s)
{
	int	x;

	x = 100;
	s->c_1 = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/shine_1.xpm", &x, &x);
	s->c_2 = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/shine_2.xpm", &x, &x);
	s->c_3 = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/shine_3.xpm", &x, &x);
}

void	ft_load_player(t_point	*s)
{
	int	x;

	x = 100;
	s->plr_r = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/player.xpm", &x, &x);
	s->plr_l = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/left_p.xpm", &x, &x);
	s->plr_d = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/front_p.xpm", &x, &x);
	s->plr_u = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/back_p.xpm", &x, &x);
}

void	ft_load_img(t_point *s)
{
	int	x;

	x = 100;
	ft_load_coins(s);
	ft_load_player(s);
	s->wall = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/wall.xpm", &x, &x);
	s->space = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/spc.xpm", &x, &x);
	s->coin = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/col.xpm", &x, &x);
	s->exit_o = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/E_o.xpm", &x, &x);
	s->exit_c = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/E_c.xpm", &x, &x);
	s->t_enemy = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/enmy.xpm", &x, &x);
	if (!s->wall || !s->space || !s->plr_d || !s->plr_l || !s->plr_r)
		ft_exit_game(s);
	if (!s->plr_u || !s->coin || !s->exit_o || !s->exit_c)
		ft_exit_game(s);
	if (!s->c_1 || !s->c_2 || !s->c_3)
		ft_exit_game(s);
}
