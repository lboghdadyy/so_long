/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:41:16 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/02/28 20:46:19 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

size_t  ft_strlen(char *s)
{
    int index;

    if (!s)
        return (0);
    index = 0;
    while (s[index])
        index++;
    return (index);
}