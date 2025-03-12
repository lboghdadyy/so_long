#include "../includes/so_long_bonus.h"

void    ft_won(t_point *s)
{
    write(1, "You won !\n", 10);
    ft_exit_game(s);
}