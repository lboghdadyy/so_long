/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_player.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 10:53:59 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/01 11:44:58 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_check_only_one(char **list, char c)
{
    int index;
    int index2;
    int count;

    (1) && (index = 0, count = 0);
    if (!list)
        return (ft_error(NULL, NULL));
    while (list[index])
    {
        index2 = 0;
        while (list[index][index2])
        {
            if (list[index][index2] == c)
            {
                if (count == 0)
                    count = 1;
                else
                    return (ft_error("Error : Invalid map check repeted\n", list));
            }
            index2++;
        }
        index++;
    }
}
