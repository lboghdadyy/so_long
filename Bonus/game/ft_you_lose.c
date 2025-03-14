#include "../includes/so_long_bonus.h"

void    ft_lost(t_point *s)
{
    write(1, "You lose !\n", 11);
    ft_exit_game(s);
}