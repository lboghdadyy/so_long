/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shortcuts_enemy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:46:29 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:18:45 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_move_it_right(t_point *s, int x, int y, t_enemy*lst)
{
	if (ft_strchr("1CE", s->map[y][x + 1]))
		return ;
	if (s->map[y][x + 1] == 'P')
		enemy_touch_player(lst, s);
	(1) && (s->map[y][x + 1] = 'N', s->map[y][x] = '0', lst->x++);
	draw_img(s, x, y);
	draw_img(s, x + 1, y);
}

void	ft_move_it_left(t_point *s, int x, int y, t_enemy*lst)
{
	if (ft_strchr("1CE", s->map[y][x - 1]))
		return ;
	if (s->map[y][x - 1] == 'P')
		enemy_touch_player(lst, s);
	(1) && (s->map[y][x - 1] = 'N', s->map[y][x] = '0', lst->x--);
	draw_img(s, x, y);
	draw_img(s, x - 1, y);
}

void	ft_move_it_up(t_point *s, int x, int y, t_enemy*lst)
{
	if (ft_strchr("1CE", s->map[y - 1][x]))
		return ;
	if (s->map[y - 1][x] == 'P')
		enemy_touch_player(lst, s);
	(1) && (s->map[y - 1][x] = 'N', s->map[y][x] = '0', lst->y--);
	draw_img(s, x, y);
	draw_img(s, x, y - 1);
}

void	ft_move_it_down(t_point *s, int x, int y, t_enemy*lst)
{
	if (ft_strchr("1CE", s->map[y + 1][x]))
		return ;
	if (s->map[y + 1][x] == 'P')
		enemy_touch_player(lst, s);
	(1) && (s->map[y + 1][x] = 'N', s->map[y][x] = '0', lst->y++);
	draw_img(s, x, y);
	draw_img(s, x, y + 1);
}
