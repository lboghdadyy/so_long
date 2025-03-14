#include "../includes/so_long_bonus.h"

void    ft_draw_player(t_point  *s, int x, int y)
{
    if (s->direction == 'D')
        mlx_put_image_to_window(s->mlx, s->win, s->plr_D, x * 100, y * 100);
    if (s->direction == 'R')
        mlx_put_image_to_window(s->mlx, s->win, s->plr_R, x * 100, y * 100);
    if (s->direction == 'L')
        mlx_put_image_to_window(s->mlx, s->win, s->plr_L, x * 100, y * 100);
    if (s->direction == 'U')
        mlx_put_image_to_window(s->mlx, s->win, s->plr_U, x * 100, y * 100);
}