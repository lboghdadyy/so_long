#include "../includes/so_long_bonus.h"

void    ft_check_player_images(t_point *s)
{
    if (s->plr_D)
        mlx_destroy_image(s->mlx, s->plr_D);
    if (s->plr_R)
        mlx_destroy_image(s->mlx, s->plr_R);
    if (s->plr_U)
        mlx_destroy_image(s->mlx, s->plr_U);
    if (s->plr_L)
        mlx_destroy_image(s->mlx, s->plr_L);
}

void    ft_exit_game(t_point *s)
{
    if (!s || !s->mlx)
        return;
    if (s->wall)
        mlx_destroy_image(s->mlx, s->wall);
    if (s->space)
        mlx_destroy_image(s->mlx, s->space);
    if (s->exit_o)
        mlx_destroy_image(s->mlx, s->exit_o);
    if (s->coin)
        mlx_destroy_image(s->mlx, s->coin);
    if (s->exit_c)
        mlx_destroy_image(s->mlx, s->exit_c);
    if (s->enemy)
        mlx_destroy_image(s->mlx, s->enemy);
    if (s->win)
        mlx_destroy_window(s->mlx, s->win);
    ft_check_player_images(s);
    mlx_destroy_display(s->mlx);
    free(s->mlx);
    ft_error(NULL, s);
}

void    ft_open_exit(t_point    *s)
{
    int y;
    int x;

    y = 0;
    while (s->map[y])
    {
        x = 0;
        while (s->map[y][x])
        {
            if (s->map[y][x] == 'E')
            {
                mlx_put_image_to_window(s->mlx, s->win, s->exit_o, y * 100, x * 100);
                return ;
            }
            x++;
        }
        y++;
    }
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