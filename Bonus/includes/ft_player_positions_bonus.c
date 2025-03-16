/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_player_positions_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:09:51 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:12:44 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

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

t_enemy	*ft_enemy_position(t_point *s)
{
	int		x;
	int		y;
	t_enemy	*lst;
	t_enemy	*tmp;
	char	**list;

	(1) && (list = s->map, lst = NULL, y = 0);
	while (list[y])
	{
		x = 0;
		while (list[y][x])
		{
			if (list[y][x] == 'N')
			{
				tmp = ft_lstnew(x, y);
				if (!tmp)
					return (ft_lstclear(&lst), NULL);
				ft_lstadd_back(&lst, tmp);
			}
			x++;
		}
		y++;
	}
	return (lst);
}
