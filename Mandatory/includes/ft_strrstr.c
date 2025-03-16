/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 11:05:46 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 11:06:51 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

char	*ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (NULL);
	}
	return (s1);
}

char	*ft_strrchr(char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (s + i);
		i--;
	}
	return (NULL);
}

char	*ft_strrstr(char *s1, char *s2)
{
	char	*resault;

	resault = ft_strrchr(s1, '.');
	if (!resault)
		return (NULL);
	if (!ft_strcmp(s2, resault))
		return (NULL);
	return (s1);
}
