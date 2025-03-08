/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:23:53 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/02/24 13:42:10 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char *ft_strchr(char *line, char c)
{
    if (!line)
        return (NULL);
    while (*line)
    {
        if (*line == c)
            return (line);
        line++;
    }
    return (NULL);
}