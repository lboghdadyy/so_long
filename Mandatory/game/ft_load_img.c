/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_load_img.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:27:36 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 12:40:38 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_load_img(t_point *s)
{
	int	x;

	x = 100;
	s->wall = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/wall.xpm",
			&x, &x);
	s->space = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/space.xpm",
			&x, &x);
	s->p_img = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/player.xpm",
			&x, &x);
	s->coin = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/t_collection.xpm",
			&x, &x);
	s->exit = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/closed_exit.xpm",
			&x, &x);
	if (!s->wall || !s->space || !s->p_img
		|| !s->coin || !s->exit)
		ft_exit_game(s);
}
