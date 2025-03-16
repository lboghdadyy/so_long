/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_positions.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:07:16 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:07:27 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_player_position(t_point *s)
{
	int		x;
	int		y;
	char	**list;

	y = 0;
	list = s->map;
	while (list[y])
	{
		x = 0;
		while (list[y][x])
		{
			if (list[y][x] == 'P')
			{
				s->x = x;
				s->y = y;
				return ;
			}
			x++;
		}
		y++;
	}
}
