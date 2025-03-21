/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_collections.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:37:00 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:17:33 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_check_collections(t_point *s)
{
	int		index;
	int		index2;
	char	**list;

	(1) && (index = 0, list = s->map, index2 = 0);
	while (list[index])
	{
		index2 = 0;
		while (list[index][index2])
		{
			if (list[index][index2] == 'C')
				return ;
			index2++;
		}
		index++;
	}
	ft_error("Error : there is no collections\n", s);
}
