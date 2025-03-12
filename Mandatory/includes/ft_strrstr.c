#include "so_long.h"

char *ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	if (s1[i] == s2[i])
        return (s1);
    else
        return (NULL);
}

char	*ft_strrchr(char *s, int c)
{
	int i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i--;
	}
	return (NULL);
}

char    *ft_strrstr(char *s1, char *s2)
{
    char    *resault;

    resault = ft_strrchr(s1, '.');
    if (!ft_strcmp(s2, resault))
        return (NULL);
    return (s1);
}