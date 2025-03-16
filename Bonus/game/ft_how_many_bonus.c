/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_how_many_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 06:27:31 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:59:52 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long_bonus.h"

int	ft_how_many(char **list, char c)
{
	int	index1;
	int	index2;
	int	count;

	index1 = 0;
	count = 0;
	while (list[index1])
	{
		index2 = 0;
		while (list[index1][index2])
		{
			if (list[index1][index2] == c)
				count++;
			index2++;
		}
		index1++;
	}
	return (count);
}
