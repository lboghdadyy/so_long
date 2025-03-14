#include "../includes/so_long_bonus.h"

void    ft_destroy_imges(t_point    *s)
{
    mlx_destroy_image(s->mlx, s->wall);
    mlx_destroy_image(s->mlx, s->space);
    mlx_destroy_image(s->mlx, s->exit_o);
    mlx_destroy_image(s->mlx, s->coin);
    ft_check_player_images(s);
    mlx_destroy_image(s->mlx, s->exit_c);
}