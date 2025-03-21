/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 13:26:51 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:27:08 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_print_moves(t_point *s, int moves)
{
	char	*tmp;
	char	*moves_str;

	moves_str = ft_itoa(moves);
	if (!moves_str)
		return ;
	tmp = ft_strjoin("moves : ", moves_str);
	free(moves_str);
	if (!tmp)
		return ;
	mlx_put_image_to_window(s->mlx, s->win, s->wall, 100, 0);
	mlx_string_put(s->mlx, s->win, 100, 100, 0x00FF0000, tmp);
	free(tmp);
}
