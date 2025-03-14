#include "../includes/so_long_bonus.h"

void    draw_enemy(t_point *s, int   x, int  y, char c)
{
    draw_img(s, x, y);
    if (c == '-')
        draw_img(s, x - 1, y);
    else if (c == '+')
        draw_img(s, x + 1, y);
}

int ft_move_enemy(t_point *s)
{
    static int frame_counter;
    int x, y;
    enemy *lst;
    enemy *tmp;

    if (++frame_counter < 35000)
        return (1);
    frame_counter = 0;
    tmp = ft_enemy_position(s);
    lst = tmp;
    while (lst)
    {
        (1) && (x = lst->x, y = lst->y);
        if (lst->direction == 1 && ft_strchr("NE1C", s->map[y][x + 1]))
            lst->direction = -1;
        else if (lst->direction == -1 && ft_strchr("NE1C", s->map[y][x - 1]))
            lst->direction = 1;
        if (lst->direction == 1 && !ft_strchr("NE1C", s->map[y][x + 1]))
        {
            if (s->map[y][x + 1] == 'P')
            {
                ft_lstclear(&lst);
                ft_lost(s);
            }
            (1) && (s->map[y][x] = '0', s->map[y][x + 1] = 'N', lst->x++);
            draw_enemy(s, x, y, '+');
        }
        else if (lst->direction == -1 && !ft_strchr("NE1C", s->map[y][x - 1]))
        {
            if (s->map[y][x - 1] == 'P')
            {
                ft_lstclear(&lst);
                ft_lost(s);
            }
            (1) && (s->map[y][x] = '0', s->map[y][x - 1] = 'N', lst->x--);
            draw_enemy(s, x, y, '-');
        }
        lst = lst->next;
    }
    printf("%d\n%d\n", tmp->x, tmp->y);
    ft_lstclear(&tmp);
    return (0);
}
