/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_shine.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:22:39 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:22:40 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

t_collection	*ft_collect_collections(t_point *s)
{
	int				x;
	int				y;
	t_collection	*lst;
	t_collection	*tmp;
	char			**list;

	(1) && (list = s->map, lst = NULL, y = 0);
	while (list[y])
	{
		x = 0;
		while (list[y][x])
		{
			if (list[y][x] == 'C')
			{
				tmp = ft_lst_coin_new(x, y);
				if (!tmp)
					return (ft_lstclear_coins(&lst), NULL);
				ft_lstaddcoin_back(&lst, tmp);
			}
			x++;
		}
		y++;
	}
	return (lst);
}

void	shine(t_collection*lst, t_point *s, int n)
{
	int				x;
	int				y;
	t_collection	*tmp;

	tmp = lst;
	while (tmp)
	{
		(1) && (x = tmp->x, y = tmp->y);
		if (n == 1)
			mlx_put_image_to_window(s->mlx, s->win, s->c_1, x * 100, y * 100);
		if (n == 2)
			mlx_put_image_to_window(s->mlx, s->win, s->c_2, x * 100, y * 100);
		if (n == 3)
			mlx_put_image_to_window(s->mlx, s->win, s->c_3, x * 100, y * 100);
		tmp = tmp->next;
	}
}

int	ft_shine(t_point *s)
{
	t_collection	*lst;
	t_collection	*tmp;
	static int		count;
	static int		frame_counter;

	if (++frame_counter < 15000)
		return (0);
	(1) && (lst = ft_collect_collections(s), frame_counter = 0, tmp = lst);
	if (count == 0)
	{
		count++;
		return (shine(lst, s, 1), ft_lstclear_coins(&tmp), 1);
	}
	else if (count == 1)
	{
		count++;
		return (shine(lst, s, 2), ft_lstclear_coins(&tmp), 1);
	}
	else if (count == 2)
	{
		count = 0;
		return (shine(lst, s, 3), ft_lstclear_coins(&tmp), 1);
	}
	return (ft_lstclear_coins(&tmp), 0);
}
