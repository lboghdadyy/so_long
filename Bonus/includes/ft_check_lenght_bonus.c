/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_lenght_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:11:55 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 10:46:21 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_check_lenght(t_point *s)
{
	int		len;
	int		index;
	char	**map;

	index = 0;
	map = s->map;
	len = ft_strlen(map[0]);
	while (map[index])
	{
		if ((ft_strlen(s->map[0]) >= 40 || ft_size_array(s->map) > 24))
			ft_error("Error : too large map !", s);
		if (ft_strlen(map[index]) != len)
			ft_error("there was a problem in the lenght\n", s);
		index++;
	}
}
