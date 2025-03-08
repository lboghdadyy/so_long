/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_collections.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:37:00 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/03 15:16:03 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_check_collections(char **list)
{
    int index;
    int index2;
    
    index = 0;
    index2 = 0;
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
    return (ft_error("Error : there is no collections\n", list));
}