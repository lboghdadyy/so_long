#include "../includes/so_long.h"

void    ft_destroy_imges(t_point    *s)
{
    mlx_destroy_image(s->mlx, s->wall);
    mlx_destroy_image(s->mlx, s->space);
    mlx_destroy_image(s->mlx, s->exit);
    mlx_destroy_image(s->mlx, s->coin);
    mlx_destroy_image(s->mlx, s->player_img);
}