#include "so_long.h"

char	**ft_dup_map(char **map)
{
	int		i;
	int		len;
	char	**new_map;

	if (!map)
		return (NULL);
	len = 0;
	while (map[len])
		len++;
	new_map = (char **)malloc(sizeof(char *) * (len + 1));
	if (!new_map)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new_map[i] = ft_strdup(map[i]);
		if (!new_map[i])
		{
			while (--i >= 0)
				free(new_map[i]);
			free(new_map);
			return (NULL);
		}
		i++;
	}
	new_map[len] = NULL;
	return (new_map);
}

void	ft_flood_fill(char **map, int x, int y)
{
	if (y < 0 || x >= ft_strlen(map[0]) || x < 0 || \
			y >= ft_size_array(map) || map[y][x] == '1' || \
			map[y][x] == 'F' || map[y][x] == 'E')
	{
		return ;
	}
	map[y][x] = 'F';
	ft_flood_fill(map, x - 1, y);
	ft_flood_fill(map, x + 1, y);
	ft_flood_fill(map, x, y - 1);
	ft_flood_fill(map, x, y + 1);
}

void	ft_check_flood_fill(t_point *s, char **map)
{
	int	i;
	int	j;

	i = 0;
	
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (((map[i][j] == 'C') || (map[i][j] == 'E' \
				&& map[i - 1][j] == '1' && map[i + 1][j] == '1' && \
				map[i][j - 1] == '1' && map[i][j + 1] == '1')))
				ft_error("Error : Invalid path\n", s);
			j++;
		}
		i++;
	}
}

void    ft_check_path(t_point *s)
{
    char    **dup_map;

    dup_map = ft_dup_map(s->map);
    if (!dup_map)
        ft_error(NULL, s);
    ft_flood_fill(dup_map, s->x, s->y);
	ft_check_flood_fill(s, dup_map);
	ft_free_tab(dup_map);
}