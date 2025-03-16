/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 11:37:48 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:15:08 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	ft_error(char *str, t_point *s)
{
	if (str)
		write(2, str, ft_strlen(str));
	if (s)
	{
		ft_free_tab(s->map);
		free(s);
	}
	exit(1);
}
