/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_collections_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 11:37:00 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/12 00:14:01 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void    ft_check_collections(t_point    *s)
{
    int index;
    int index2;
    char    **list = s->map;
    
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
    write(1, "here\n", 5);
    ft_error("Error : there is no collections\n", s);
}
