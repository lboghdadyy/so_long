/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_walls.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 15:13:39 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:04:30 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	ft_check_top_bot(char *line)
{
	int	ind;

	ind = 0;
	while (line[ind])
	{
		if (line[ind] != '1')
			return (1);
		ind++;
	}
	return (0);
}

int	ft_size_array(char **list)
{
	int	count;

	if (!list || !*list)
		return (0);
	count = 0;
	while (list[count])
		count++;
	return (count);
}

int	ft_check_mid(char *line)
{
	int	index;

	index = 0;
	if (line[0] != '1' || line[ft_strlen(line) - 1] != '1')
		return (1);
	while (line[index])
	{
		if (!ft_strchr("01CPE", line[index]))
			return (1);
		index++;
	}
	return (0);
}

void	ft_check_walls(t_point	*s)
{
	int		index;
	int		size;
	char	**list;

	list = s->map;
	index = 0;
	size = ft_size_array(list);
	while (list[index])
	{
		if (index == 0 || index == size - 1)
		{
			if (ft_check_top_bot(list[index]))
				ft_error("there was a probleme in walls", s);
		}
		else
		{
			if (ft_check_mid(list[index]))
				ft_error("there was a probleme in mid map", s);
		}
		index++;
	}
}
