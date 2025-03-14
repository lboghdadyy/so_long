#include "../includes/so_long.h"

void    ft_exit_game(t_point *s)
{
    if (!s || !s->mlx)
        return;
    if (s->wall)
        mlx_destroy_image(s->mlx, s->wall);
    if (s->space)
        mlx_destroy_image(s->mlx, s->space);
    if (s->coin)
        mlx_destroy_image(s->mlx, s->coin);
    if (s->player_img)
        mlx_destroy_image(s->mlx, s->player_img);
    if (s->exit)
        mlx_destroy_image(s->mlx, s->exit);
    if (s->win)
        mlx_destroy_window(s->mlx, s->win);
    mlx_destroy_display(s->mlx);
    free(s->mlx);
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