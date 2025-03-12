#include "../includes/so_long_bonus.h"

void    ft_move_enemy(t_point *s, enemy *lst,char c)
{
    int x;
    int y;
    char    **mapp;

    (1) && (x = s->e_x, y = s->y, mapp = s->map);
    while (lst)
    {
        (1) && (x = lst->e_x, y = lst->y, mapp = s->map);
        while (mapp[y + 1][x] != '1' || mapp[y - 1][x] != '1' || mapp[y][x - 1] != '1' || mapp[y][x - 1] != '1')
        {
            if (c == 'R')
            {
        
                lst->e_x++;
            }
            else if (c == 'L')
                lst->e_x--;
            else if (c == 'U')
                lst->e_y--;
            else if (c == 'D')
                lst->e_y++;
            (x = s->e_x, y = s->y, mapp = s->map);
        }
    }
}