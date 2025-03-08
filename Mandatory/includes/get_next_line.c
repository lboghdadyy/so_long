/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:37:47 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/02/28 20:26:17 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*cut_it(char *str)
{
	char	*cut;
	int		i;

	if (!str)
		return (NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
		i++;
	if (str[i] == '\n')
		i++;
	cut = malloc(i + 1);
	if (!cut)
		return (free(str), NULL);
	i = 0;
	while (str[i] != '\n' && str[i])
	{
		cut[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
		cut[i++] = '\n';
	cut[i] = '\0';
	return (cut);
}

char	*change_index(char	*readed)
{
	int		i;
	int		j;
	char	*str;

	if (!readed)
		return (NULL);
	(1) && (i = 0, j = 0);
	while (readed[i] != '\n' && readed[i])
		i++;
	if (readed[i] == '\n')
		i++;
	if (readed[i] == '\0')
		return (free(readed), NULL);
	str = malloc(ft_strlen(readed + i) + 1);
	if (!str)
		return (free(readed), NULL);
	while (readed[i])
	{
		str[j] = readed[i];
		j++;
		i++;
	}
	str[j] = '\0';
	free(readed);
	return (str);
}

char	*get_it(int fd, char *readed)
{
	char	*buffer;
	int		bytes;
	char	*tmp;

	bytes = 1;
	while (!ft_strchr(readed, '\n'))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (free(readed), NULL);
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes == 0 && readed)
			return (free(buffer), readed);
		else if ((bytes == 0 && !readed) || bytes == -1)
			return (free(buffer), free(readed), NULL);
		buffer[bytes] = '\0';
		tmp = ft_strjoin_gnl(readed, buffer);
		free (readed);
		free (buffer);
		readed = tmp;
	}
	return (readed);
}

char	*get_next_line(int fd)
{
	static char	*readed;
	char		*line;
	char		*tmp;

	if (fd > 1024 || fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > 2147483647)
		return (NULL);
	readed = get_it(fd, readed);
	if (!readed)
	{
		free(readed);
		return (NULL);
	}
	line = cut_it(readed);
	if (!line)
		return (free (readed), line);
	tmp = change_index(readed);
	readed = tmp;
	return (line);
}
