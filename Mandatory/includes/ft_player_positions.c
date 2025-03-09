#include "so_long.h"

t_point ft_player_position(char **list)
{
    t_point begin;
    int     x;
    int     y;

    y = 0;
    while (list[y])
    {
        x = 0;
        while (list[y][x])
        {
            if (list[y][x] == 'P')
            {
                begin.x = x;
                begin.y = y;
                return (begin);
            }
            x++;
        }
        y++;
    }
    return (begin);
}