#include "so_long.h"

void    ft_check_lenght(char **map)
{
    size_t  len;
    int     index;

    index = 0;
    len = ft_strlen(map[0]);
    while (map[index])
    {
        if (ft_strlen(map[index]) != len)
            ft_error("there was a problem in the leght\n", map);
        index++;
    }
}