#include "../includes/so_long_bonus.h"

void    ft_up(t_point   *s)
{
    int x;
    int y;
    
    x = s->x;
    y = s->y;
    if (s->map[y - 1][x] != '1')
    {
        if (s->map[y - 1][x] == 'E' && s->coins != 0)
            return ;
        if (s->map[y - 1][x] == 'E' && s->coins == 0)
            ft_won(s);
        if (s->map[y - 1][x] == 'N')
            ft_lost(s);
        s->moves++;
        if (s->map[y - 1][x] == 'C')
            s->coins--;
        s->map[y - 1][x] = 'P';
        s->map[y][x] = '0';
        s->x = x;
        s->y = y - 1;
        s->direction = 'U';
        draw_img(s, x, y);
        draw_img(s, x, y - 1);
        ft_print_moves(s, s->moves);
        if (s->coins == 0)
            ft_open_exit(s);
    }
}

void    ft_right(t_point   *s)
{
    int x;
    int y;
    
    x = s->x;
    y = s->y;
    if (s->map[y][x + 1] != '1')
    {
        if (s->map[y][x + 1] == 'E' && s->coins != 0)
            return ;
        if (s->map[y][x + 1] == 'E' && s->coins == 0)
            ft_won(s);
        if (s->map[y][x + 1] == 'N')
            ft_lost(s);
        s->moves++;
        if (s->map[y][x + 1] == 'C')
            s->coins--;
        s->map[y][x + 1] = 'P';
        s->map[y][x] = '0';
        s->x = x + 1;
        s->y = y;
        s->direction = 'R';
        draw_img(s, x, y);
        draw_img(s, x + 1, y);
        ft_print_moves(s, s->moves);
        if (s->coins == 0)
            ft_open_exit(s);
    }
}

void    ft_down(t_point   *s)
{
    int x;
    int y;
    
    x = s->x;
    y = s->y;
    if (s->map[y + 1][x] != '1')
    {
        if (s->map[y + 1][x] == 'E' && s->coins != 0)
            return ;
        if ((s->map[y + 1][x] == 'E' && s->coins == 0))
            ft_won(s);
        if (s->map[y + 1][x] == 'N')
            ft_lost(s);
        s->moves++;
        if (s->map[y + 1][x] == 'C')
            s->coins--;
        s->map[y + 1][x] = 'P';
        s->map[y][x] = '0';
        s->x = x;
        s->y = y + 1;
        s->direction = 'D';
        draw_img(s, x, y);
        draw_img(s, x, y + 1);
        ft_print_moves(s, s->moves);
        if (s->coins == 0)
            ft_open_exit(s);
    }
}

void    ft_left(t_point   *s)
{
    int x;
    int y;
    
    x = s->x;
    y = s->y;
    if (s->map[y][x - 1] != '1')
    {
        if (s->map[y][x - 1] == 'E' && s->coins != 0)
            return ;
        if (s->map[y][x - 1] == 'E' && s->coins == 0)
            ft_won(s);
        if (s->map[y][x - 1] == 'N')
            ft_lost(s);
        s->moves++;
        if (s->map[y][x - 1] == 'C')
            s->coins--;
        s->map[y][x  - 1] = 'P';
        s->map[y][x] = '0';
        s->x = x  - 1;
        s->y = y;
        s->direction = 'L';
        draw_img(s, x, y);
        draw_img(s, x - 1, y);
        ft_print_moves(s, s->moves);
        if (s->coins == 0)
            ft_open_exit(s);
    }
}