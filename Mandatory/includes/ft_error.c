/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:37:48 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/10 23:35:12 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    ft_error(char *str, t_point   *s)
{
    if (str)
        write(2, str, ft_strlen(str));
    ft_free_tab(s->map);
    free(s);
    exit(1);
}