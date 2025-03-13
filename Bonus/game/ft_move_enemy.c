#include "../includes/so_long_bonus.h"
int ft_move_enemy(t_point *s)
{
    static int frame_counter = 0;
    int x, y;
    enemy *lst;

    if (++frame_counter < 50000)
        return (0);
    frame_counter = 0;
    lst = ft_enemy_position(s);
    while (lst)
    {
        x = lst->x;
        y = lst->y;
        if (lst->direction == 1 && (s->map[y][x + 1] == '1' || s->map[y][x + 1] == 'N'))
            lst->direction = -1;
        else if (lst->direction == -1 && (s->map[y][x - 1] == '1' || s->map[y][x - 1] == 'N'))
            lst->direction = 1;
        if (lst->direction == 1 && s->map[y][x + 1] != '1' && s->map[y][x + 1] != 'N')
        {
            s->map[y][x] = '0';
            s->map[y][x + 1] = 'N';
            lst->x++;
        }
        else if (lst->direction == -1 && s->map[y][x - 1] != '1' && s->map[y][x - 1] != 'N')
        {
            s->map[y][x] = '0';
            s->map[y][x - 1] = 'N';
            lst->x--;
        }
        lst = lst->next;
    }
    ft_put_image(s);
    return (0);
}
