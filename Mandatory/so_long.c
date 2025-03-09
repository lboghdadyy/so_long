/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:40:15 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/09 02:06:17 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long.h"

size_t	lenght_of_line(char *line)
{
	size_t	lenght;

	lenght = 0;
	if (!line)
		return (0);
	while(line[lenght] && line[lenght + 1] != '\n')
		lenght++;
	return (lenght);
}

void	ft_check_content_map(t_point	*s, char *map)
{
	char	*line = NULL;
	char	*tmp;
	char	*tmp_join;
	int		fd;
	char	**list;

	fd = open(map, O_RDONLY, 0644);
	if (fd == -1)
		ft_error("Error : there is no map with that path\n", s);
	while (1)
	{
		tmp = get_next_line(fd);
		if (!tmp)
			break;
		tmp_join = ft_strjoin_gnl(line, tmp);
		if (!tmp_join)
		{
			free(line);
			ft_error(NULL, s);
		}
		free(line);
		free(tmp);
		line = tmp_join;
	}
	list = ft_split(line, '\n');
	if (!list)
		ft_error(NULL, s);
	close(fd);
	free(line);
	s->map = list;
}

void	ft_check_map(t_point *s, char *map)
{
	int		index;
	char	*extention;

	index = 0;
	if (ft_strlen(map) <= 4)
		ft_error("there was a probleme in the file path\n", NULL);
	extention = ft_strstr(map, ".ber");
	if(!extention || ft_strlen(extention) != 4)
		ft_error("there was a probleme in the file path\n", NULL);
	ft_check_content_map(s, map);
	ft_check_walls(s);
	ft_check_lenght(s);
	ft_check_uniq_exit(s);
	ft_check_collections(s);
	ft_check_uniq_player(s);
}

int	main(int ac, char **av)
{
	t_point *s;

	if (ac == 2)
	{
		s = malloc(sizeof(t_point));
		if (!s)
			return (1);
		ft_check_map(s, av[1]);
		// ft_rendering_map();
		// ft_free_tab(map_list);
		ft_error(NULL, s);
	}
	return (0);
}