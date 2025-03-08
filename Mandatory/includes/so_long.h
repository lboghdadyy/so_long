/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:32:48 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/07 21:59:10 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>
#include "../../../minilibx-linux/mlx.h"

#define BUFFER_SIZE 1024

typedef	struct	s_allocated
{
	struct s_allocated	*next;
	void				*allocated;
} s_allocated;

char	*ft_strstr(char *haystack, char *needle);
char	*get_next_line(int fd);
size_t  ft_strlen(char *string);
// t_list	*ft_lstnew(char *line);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstclear(t_list **lst);
// t_list	*ft_lstlast(t_list *lst);
char	*ft_strjoin_gnl(char *s1, char *s2);
char    *ft_strchr(char *line, char c);
char    *ft_strdup(char *s1);
int		ft_check_walls(char **list);
void    ft_error(char *s, char  **map);
void	ft_check_lenght(char **map);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);
void	ft_free_tab(char **str);
void		ft_check_only_one(char **list, char c);
void    ft_check_collections(char **list);

#endif