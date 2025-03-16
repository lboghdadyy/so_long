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
    enemy *temp;  // Temporary pointer to store the current node before freeing it

    if (++frame_counter < 35000)
        return (1);
    frame_counter = 0;
    lst = ft_enemy_position(s);
    if (!lst)
        return (0);

    while (lst)
    {
        x = lst->x;
        y = lst->y;

        // Handle movement logic...
        if (lst->direction == 1 && !ft_strchr("NE1C", s->map[y][x + 1]))
        {
            if (s->map[y][x + 1] == 'P')
            {
                // Collision with player, clear the list and handle loss
                ft_lstclear(&lst);  // Free all remaining nodes in the list
                ft_lost(s);
                return (0); // Early exit after clearing the list
            }
            s->map[y][x] = '0';
            s->map[y][x + 1] = 'N';
            lst->x++;
            draw_enemy(s, x, y, '+');
        }
        else if (lst->direction == -1 && !ft_strchr("NE1C", s->map[y][x - 1]))
        {
            if (s->map[y][x - 1] == 'P')
            {
                ft_lstclear(&lst);
                ft_lost(s);
                return (0);
            }
            s->map[y][x] = '0';
            s->map[y][x - 1] = 'N';
            lst->x--;
            draw_enemy(s, x, y, '-');
        }
        temp = lst;
        lst = lst->next;
        free(temp);
    }
    ft_lstclear(&lst);

    return (0);
}
