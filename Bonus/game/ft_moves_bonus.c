#include "../includes/so_long_bonus.h"

void    ft_exit_game(t_point *s)
{
    mlx_destroy_image(s->mlx, s->wall);
    mlx_destroy_image(s->mlx, s->space);
    mlx_destroy_image(s->mlx, s->exit_o);
    mlx_destroy_image(s->mlx, s->coin);
    mlx_destroy_image(s->mlx, s->player_img);
    mlx_destroy_image(s->mlx, s->exit_c);
    // if (s->wall)
    //     free(s->wall);
    // if (s->space)
    //     free(s->space);
    // if (s->exit_o)
    //     free(s->exit_o);
    // if (s->coin)
    //     free(s->coin);
    // if (s->player_img)
    //     free(s->player_img);
    // if (s->exit_c)
    //     free(s->exit_c);
    mlx_destroy_window(s->mlx, s->win);
    ft_error(NULL, s);
}

int key_hook(int key_code, t_point *s)
{
    if (key_code == ESC)
        ft_exit_game(s);
    if (key_code == ARROW_UP)
        ft_up(s);
    if (key_code == ARROW_DOWN)
        ft_down(s);
    if (key_code == ARROW_LEFT)
        ft_left(s);
    if (key_code == ARROW_RIGHT)
        ft_right(s);
    return (0);
}