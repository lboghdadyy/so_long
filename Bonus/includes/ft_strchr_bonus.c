/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:23:53 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 13:03:25 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_strchr(char *line, char c)
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
