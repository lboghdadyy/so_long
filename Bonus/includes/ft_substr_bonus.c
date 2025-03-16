/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:38:04 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 12:51:02 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

char	*ft_strsub(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (!s || !substr)
		return (NULL);
	while (i < len && s[start])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
