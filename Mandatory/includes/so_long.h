/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:32:48 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/09 23:17:04 by sbaghdad         ###   ########.fr       */
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

typedef struct s_point {
	char	**map;
	int		x;
	int		y;
	int		y_e;
	int		x_e;
	int		width;
	int		height;
	void	*wall;
	void	*space;
	void	*down;
	void	*coin;
	void	*exit_o;
	void	*exit_c;
	void	*mlx;
	void	*win;
	
} t_point;


char	*ft_strstr(char *haystack, char *needle);
char	*get_next_line(int fd);
int 	ft_strlen(char *string);
// t_list	*ft_lstnew(char *line);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstclear(t_list **lst);
// t_list	*ft_lstlast(t_list *lst);
char	*ft_strjoin_gnl(char *s1, char *s2);
char    *ft_strchr(char *line, char c);
char    *ft_strdup(char *s1);
int		ft_size_array(char **list);
void	ft_check_walls(t_point	*s);
void    ft_error(char *str, t_point *s);
void    ft_check_lenght(t_point *s);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);
void	ft_free_tab(char **str);
void    ft_check_uniq_player(t_point *s);
void    ft_check_uniq_exit(t_point *s);
void    ft_check_collections(t_point    *s);
void  	flood_fill(char **tab, t_point size, t_point begin);
t_point ft_size_cord(char **list);
void ft_player_position(t_point *s);
void    ft_check_path(t_point *s);

#endif