#include "so_long.h"

int ft_count(char **list)
{
    int index;

    index = 0;
    while (list[index])
        index++;
    return (index);
}

t_point ft_size_cord(char **list)
{
    t_point size;

    size.x = ft_strlen(list[0]);
    size.y = ft_count(list);
    return (size);
}
