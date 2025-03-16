/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:27:05 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:27:28 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_exit_game(t_point *s)
{
	if (!s || !s->mlx)
		return ;
	if (s->wall)
		mlx_destroy_image(s->mlx, s->wall);
	if (s->space)
		mlx_destroy_image(s->mlx, s->space);
	if (s->coin)
		mlx_destroy_image(s->mlx, s->coin);
	if (s->p_img)
		mlx_destroy_image(s->mlx, s->p_img);
	if (s->exit)
		mlx_destroy_image(s->mlx, s->exit);
	if (s->win)
		mlx_destroy_window(s->mlx, s->win);
	mlx_destroy_display(s->mlx);
	free(s->mlx);
	ft_error(NULL, s);
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
