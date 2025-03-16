/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_player.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:06:15 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 14:00:01 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_draw_player(t_point *s, int x, int y)
{
	if (s->direction == 'D')
		mlx_put_image_to_window(s->mlx, s->win, s->plr_d, x * 100, y * 100);
	if (s->direction == 'R')
		mlx_put_image_to_window(s->mlx, s->win, s->plr_r, x * 100, y * 100);
	if (s->direction == 'L')
		mlx_put_image_to_window(s->mlx, s->win, s->plr_l, x * 100, y * 100);
	if (s->direction == 'U')
		mlx_put_image_to_window(s->mlx, s->win, s->plr_u, x * 100, y * 100);
}
