/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:40:15 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/01 11:46:43 by sbaghdad         ###   ########.fr       */
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

char	**ft_check_content_map(char *map)
{
	char	*line = NULL;
	char	*tmp;
	char	*tmp_join;
	int		fd;
	char	**list;

	fd = open(map, O_RDONLY, 0644);
	if (fd == -1)
		return (NULL);
	while (1)
	{
		tmp = get_next_line(fd);
		if (!tmp)
			break;
		tmp_join = ft_strjoin_gnl(line, tmp);
		if (!tmp_join)
			return (free(line), NULL);
		free(line);
		free(tmp);
		line = tmp_join;
	}
	list = ft_split(line, '\n');
	close(fd);
	return (free(line), list);
}

char	**ft_check_map(char *map)
{
	int		index;
	char	*extention;
	char	**lst;

	index = 0;
	if (ft_strlen(map) <= 4)
		return (ft_error("there was a probleme in the file path\n", NULL), NULL);
	extention = ft_strstr(map, ".ber");
	if(!extention || ft_strlen(extention) != 4)
		return (ft_error("there was a probleme in the file path\n", NULL), NULL);
	lst = ft_check_content_map(map);
	if (!lst)
		return (NULL);
	ft_check_walls(lst);
	ft_check_lenght(lst);
	ft_check_only_one(lst, 'P');
	ft_check_only_one(lst, 'E');
	ft_check_collections(lst);
	return (lst);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		ft_check_map(av[1]);
	}
}
