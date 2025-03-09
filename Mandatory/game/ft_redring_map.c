#include "../includes/so_long.c"

void    ft_initialisation(t_point *s)
{
    s->width = ft_strlen(s->map[0]) * 50;
    s->height = ft_size_array(s->map) * 50;
    
}

void    ft_render_map(t_point *s)
{
    ft_initialisation(s);
}