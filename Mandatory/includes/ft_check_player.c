/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_player.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:53:59 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:12:40 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_uniq_player(t_point *s)
{
	int		index;
	int		index2;
	int		count;
	char	**list;

	(1) && (index = 0, count = 0, list = s->map);
	while (list[index])
	{
		index2 = 0;
		while (list[index][index2])
		{
			if (list[index][index2] == 'P')
			{
				if (count == 0)
					(1) && (s->x = index2, s->y = index, count = 1);
				else
					return (ft_error("Error : Invalid map check repeted\n", s));
			}
			index2++;
		}
		index++;
	}
	if (count == 0)
		ft_error("Error : check either Exit or Player\n", s);
}

void	ft_check_uniq_exit(t_point *s)
{
	int		index;
	int		index2;
	int		count;
	char	**list;

	(1) && (index = 0, count = 0, list = s->map);
	while (list[index])
	{
		index2 = 0;
		while (list[index][index2])
		{
			if (list[index][index2] == 'E')
			{
				if (count == 0)
					(1) && (s->e_x = index2, s->e_y = index, count = 1);
				else
					return (ft_error("Error : Invalid map check repeted\n", s));
			}
			index2++;
		}
		index++;
	}
	if (count == 0)
		ft_error("Error : check either Exit or Player\n", s);
}
