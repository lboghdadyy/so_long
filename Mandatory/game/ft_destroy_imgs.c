/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_imgs.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:30:24 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:30:37 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_destroy_imges(t_point *s)
{
	mlx_destroy_image(s->mlx, s->wall);
	mlx_destroy_image(s->mlx, s->space);
	mlx_destroy_image(s->mlx, s->exit);
	mlx_destroy_image(s->mlx, s->coin);
	mlx_destroy_image(s->mlx, s->p_img);
}
