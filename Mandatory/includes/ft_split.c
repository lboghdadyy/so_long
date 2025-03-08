#include "so_long.h"

void	ft_free_tab(char **str)
{
	int	i;

	if (!str)
		return ;
	i = 0;
	while (str && str[i])
	{
		free(str[i]);
		i++;
	}
	free (str);
}

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

size_t	word_len(char *s, char c)
{
	size_t	word_len;

	if (!s)
		return (0);
	if (!ft_strchr(s, c))
		word_len = ft_strlen(s);
	else
		word_len = ft_strchr(s, c) - s;
	return (word_len);
}

char	**ft_split(char *s, char c)
{
	char	**lst;
	size_t	word_lenght;
	int		i;
	char	*tmp;

	if (!s)
		return (NULL);
	(1) && (i = 0, lst = malloc((ft_countword(s, c) + 1) * sizeof(char *)));
	if (!lst)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			word_lenght = word_len(s, c);
			tmp = ft_strsub(s, 0, word_lenght);
			if (!tmp)
				return (ft_free_tab(lst), NULL);
			(1) && (lst[i++] = tmp, s += word_lenght);
		}
	}
	lst[i] = NULL;
	return (lst);
}
