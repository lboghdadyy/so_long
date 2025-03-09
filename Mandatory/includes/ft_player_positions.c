#include "so_long.h"

void ft_player_position(t_point *s)
{
    int     x;
    int     y;
    char    **list = s->map;

    y = 0;
    while (list[y])
    {
        x = 0;
        while (list[y][x])
        {
            if (list[y][x] == 'P')
            {
                s->x = x;
                s->y = y;
                return ;
            }
            x++;
        }
        y++;
    }
}