/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_imgs_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:26:58 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 14:00:08 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

void	ft_destroy_imges(t_point *s)
{
	mlx_destroy_image(s->mlx, s->wall);
	mlx_destroy_image(s->mlx, s->space);
	mlx_destroy_image(s->mlx, s->exit_o);
	mlx_destroy_image(s->mlx, s->coin);
	ft_check_player_images(s);
	mlx_destroy_image(s->mlx, s->exit_c);
}
