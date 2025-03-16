/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_move_enemy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:38:52 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:45:01 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	draw_enemy(t_point *s, int x, int y, char c)
{
	draw_img(s, x, y);
	if (c == '-')
		draw_img(s, x - 1, y);
	else if (c == '+')
		draw_img(s, x + 1, y);
}

void	enemy_touch_player(t_enemy*lst, t_point	*s)
{
	ft_lstclear(&lst);
	ft_lost(s);
}

void	move_it(t_enemy	*lst, t_point *s, int x, int y)
{
	if (lst->direction == 1 && !ft_strchr("NE1C", s->map[y][x + 1]))
		ft_move_it_right(s, x, y, lst);
	else if (lst->direction == -1 && !ft_strchr("NE1C", s->map[y][x - 1]))
		ft_move_it_left(s, x, y, lst);
	else if (lst->direction == 2 && !ft_strchr("NE1C", s->map[y - 1][x]))
		ft_move_it_up(s, x, y, lst);
	else if (lst->direction == 2 && !ft_strchr("NE1C", s->map[y + 1][x]))
		ft_move_it_down(s, x, y, lst);
}

int	ft_move_enemy(t_point *s)
{
	static int	frame_counter;
	int			x;
	int			y;
	t_enemy		*lst;
	t_enemy		*temp;

	ft_shine(s);
	if (++frame_counter < 20000)
		return (1);
	(1) && (lst = ft_enemy_position(s), frame_counter = 0);
	if (!lst)
		return (0);
	while (lst)
	{
		(1) && (x = lst->x, y = lst->y);
		move_it(lst, s, x, y);
		(1) && (temp = lst, lst = lst->next);
		free(temp);
	}
	ft_lstclear(&lst);
	return (0);
}
