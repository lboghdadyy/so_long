/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:38:03 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/02/28 20:33:14 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strdup(char *s1)
{
	char	*str;
	size_t	i;

	if (!s1)
		return (NULL);
	str = malloc(sizeof(*s1) * (ft_strlen(s1) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = 0;
	return (str);
}

char	*check_it(char	*str1, char	*str2)
{
	if (!str1 && str2)
		return (ft_strdup(str2));
	else if (str1 && !str2)
		return (ft_strdup(str1));
	else
		return (NULL);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*string;
	size_t	len;
	int		j;
	int		i;

	if (!s1 || !s2)
		return (check_it(s1, s2));
	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = (char *)malloc(len);
	if (!string)
		return (NULL);
	(1) && (i = 0, j = 0);
	while (s1[i])
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		string[i] = s2[j];
		(1) && (i++, j++);
	}
	string[i] = '\0';
	return (string);
}
