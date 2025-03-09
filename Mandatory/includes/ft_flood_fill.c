/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flood_fill.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 17:27:17 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/08 23:04:06 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_flood_fill(char **map)
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
				&& map[i - 1][j] != 'F' && map[i + 1][j] != 'F' && \
				map[i][j - 1] != 'F' && map[i][j + 1] != 'F')) \
				&& ft_printf("! Map ! -> invalid path \n"))
				exit(EXIT_FAILURE);
			j++;
		}
		i++;
	}
}

void	ft_flood_fill(char **map, int x, int y)
{
	if (y < 0 || y >= ft_strlen(map[0]) || x < 0 || \
			x >= line_num(map) || map[x][y] == '1' || \
			map[x][y] == 'F' || map[x][y] == 'E')
		return ;
	map[x][y] = 'F';
	ft_flood_fill(map, x - 1, y); // Move left
	ft_flood_fill(map, x + 1, y); // Move right
	ft_flood_fill(map, x, y - 1); // Move up
	ft_flood_fill(map, x, y + 1); // Move down
}

void	ft_check_path(char **map)
{
	
}