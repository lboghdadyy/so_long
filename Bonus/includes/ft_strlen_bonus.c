/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/28 20:41:16 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 06:09:57 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

int	ft_strlen(char *s)
{
	int	index;

	if (!s)
		return (0);
	index = 0;
	while (s[index])
		index++;
	return (index);
}
