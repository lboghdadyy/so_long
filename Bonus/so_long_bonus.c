/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:40:15 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:34:35 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/so_long_bonus.h"

int	ft_open_map(t_point *s, char *map)
{
	int	fd;

	fd = open(map, O_RDONLY, 0644);
	if (fd == -1)
		ft_error("Error : there is no map with that path\n", s);
	return (fd);
}

void	ft_check_content_map(t_point *s, char *map)
{
	char	*line;
	char	*tmp;
	char	*tmp_join;
	int		fd;
	char	**list;

	(1) && (line = NULL, s->map = NULL, fd = ft_open_map(s, map));
	while (1)
	{
		tmp = get_next_line(fd);
		if (!tmp)
			break ;
		if (ft_strlen(tmp) == 1)
			(free(tmp), close(fd), free(line), ft_error("\
			Error : in the map lines\n", s));
		tmp_join = ft_strjoin_gnl(line, tmp);
		if (!tmp_join)
			(close(fd), free(line), free(tmp), ft_error(NULL, s));
		(free(line), free(tmp));
		line = tmp_join;
	}
	(1) && (list = ft_split(line, '\n'), s->map = list);
	(free(line), close(fd));
	if (!list)
		ft_error("Error : empty map !\n", s);
}

void	ft_check_map(t_point *s, char *map)
{
	char	*extention;

	extention = ft_strrstr(map, ".ber");
	if (!extention)
	{
		free(s);
		write(2, "there was a probleme in the file path\n", 38);
		exit(1);
	}
	ft_check_content_map(s, map);
	ft_check_walls(s);
	ft_check_lenght(s);
	ft_check_uniq_exit(s);
	ft_check_collections(s);
	ft_check_uniq_player(s);
	ft_player_position(s);
	ft_check_path(s);
}

int	main(int ac, char **av)
{
	t_point	*s;

	if (ac == 2)
	{
		s = malloc(sizeof(t_point));
		if (!s)
			return (1);
		ft_check_map(s, av[1]);
		ft_render_map(s);
		ft_error(NULL, s);
	}
	return (0);
}
