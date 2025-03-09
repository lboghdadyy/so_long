#include "so_long.h"

void    ft_check_lenght(t_point *s)
{
    int  len;
    int  index;
    char    **map = s->map;

    index = 0;
    len = ft_strlen(map[0]);
    while (map[index])
    {
        if (ft_strlen(map[index]) != len)
            ft_error("there was a problem in the leght\n", s);
        index++;
    }
}