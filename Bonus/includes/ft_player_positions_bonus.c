#include "so_long_bonus.h"

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

enemy *ft_enemy_position(t_point *s)
{
    int     x;
    int     y;
    enemy   *lst = NULL;
    enemy   *tmp = NULL;
    char    **list;

    **list = s->map;
    y = 0;
    while (list[y])
    {
        x = 0;
        while (list[y][x])
        {
            if (list[y][x] == 'N')
            {
                tmp = ft_lstnew(x, y);
                if (tmp)
                    return (ft_lstclear(lst));
                ft_lstadd_back(&lst, tmp);
                return ;
            }
            x++;
        }
        y++;
    }
}