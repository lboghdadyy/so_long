/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:24:42 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:26:54 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_up(t_point *s)
{
	int	x;
	int	y;

	x = s->x;
	y = s->y;
	if (s->map[y - 1][x] != '1')
	{
		if (s->map[y - 1][x] == 'E' && s->coins != 0)
			return ;
		if (s->map[y - 1][x] == 'E' && s->coins == 0)
			ft_won(s);
		s->moves++;
		ft_print_moves(s->moves);
		if (s->map[y - 1][x] == 'C')
			s->coins--;
		s->map[y - 1][x] = 'P';
		s->map[y][x] = '0';
		s->x = x;
		s->y = y - 1;
		draw_img(s, x, y);
		draw_img(s, x, y - 1);
	}
}

void	ft_right(t_point *s)
{
	int	x;
	int	y;

	x = s->x;
	y = s->y;
	if (s->map[y][x + 1] != '1')
	{
		if (s->map[y][x + 1] == 'E' && s->coins != 0)
			return ;
		if (s->map[y][x + 1] == 'E' && s->coins == 0)
			ft_won(s);
		s->moves++;
		ft_print_moves(s->moves);
		if (s->map[y][x + 1] == 'C')
			s->coins--;
		s->map[y][x + 1] = 'P';
		s->map[y][x] = '0';
		s->x = x + 1;
		s->y = y;
		draw_img(s, x, y);
		draw_img(s, x + 1, y);
	}
}

void	ft_down(t_point *s)
{
	int	x;
	int	y;

	x = s->x;
	y = s->y;
	if (s->map[y + 1][x] != '1')
	{
		if (s->map[y + 1][x] == 'E' && s->coins != 0)
			return ;
		if ((s->map[y + 1][x] == 'E' && s->coins == 0))
			ft_won(s);
		s->moves++;
		ft_print_moves(s->moves);
		if (s->map[y + 1][x] == 'C')
			s->coins--;
		s->map[y + 1][x] = 'P';
		s->map[y][x] = '0';
		s->x = x;
		s->y = y + 1;
		draw_img(s, x, y);
		draw_img(s, x, y + 1);
	}
}

void	ft_left(t_point *s)
{
	int	x;
	int	y;

	x = s->x;
	y = s->y;
	if (s->map[y][x - 1] != '1')
	{
		if (s->map[y][x - 1] == 'E' && s->coins != 0)
			return ;
		if (s->map[y][x - 1] == 'E' && s->coins == 0)
			ft_won(s);
		s->moves++;
		ft_print_moves(s->moves);
		if (s->map[y][x - 1] == 'C')
			s->coins--;
		s->map[y][x - 1] = 'P';
		s->map[y][x] = '0';
		s->x = x - 1;
		s->y = y;
		draw_img(s, x, y);
		draw_img(s, x - 1, y);
	}
}
