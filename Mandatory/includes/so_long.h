/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbaghdad < sbaghdad@student.1337.ma>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 11:32:48 by sbaghdad          #+#    #+#             */
/*   Updated: 2025/03/16 19:38:28 by sbaghdad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include "../../../minilibx-linux/mlx.h"

# define BUFFER_SIZE 1
# define ESC 65307  
# define ARROW_UP 65362
# define ARROW_LEFT 65361
# define ARROW_RIGHT 65363
# define ARROW_DOWN	65364

typedef struct s_point {
	char	**map;
	void	*mlx;
	void	*win;
	int		width;
	int		height;
	void	*wall;
	void	*space;
	void	*p_img;
	void	*coin;
	void	*exit;
	int		x;
	int		y;
	int		e_x;
	int		e_y;
	int		moves;
	int		player;
	int		coins;
}	t_point;

char	*ft_strstr(char *haystack, char *needle);
char	*get_next_line(int fd);
int		ft_strlen(char *string);
char	*ft_strjoin_gnl(char *s1, char *s2);
char	*ft_strchr(char *line, char c);
char	*ft_strdup(char *s1);
int		ft_size_array(char **list);
void	ft_check_walls(t_point	*s);
void	ft_error(char *str, t_point *s);
void	ft_check_lenght(t_point *s);
char	*ft_strsub(char *s, unsigned int start, size_t len);
char	**ft_split(char *s, char c);
void	ft_free_tab(char **str);
void	ft_check_uniq_player(t_point *s);
void	ft_check_uniq_exit(t_point *s);
void	ft_check_collections(t_point *s);
void	flood_fill(char **tab, t_point size, t_point begin);
t_point	ft_size_cord(char **list);
void	ft_player_position(t_point *s);
void	ft_check_path(t_point *s);
void	ft_render_map(t_point *s);
void	ft_load_img(t_point *s);
int		key_hook(int key_code, t_point *s);
void	ft_up(t_point *s);
void	ft_left(t_point *s);
void	ft_down(t_point *s);
void	ft_right(t_point *s);
void	ft_put_image(t_point *s);
int		ft_how_many(char **list, char c);
void	ft_exit_game(t_point *s);
void	ft_won(t_point *s);
void	ft_print_moves(int moves);
void	ft_destroy_imges(t_point *s);
char	*ft_strrstr(char *s1, char *s2);
void	draw_img(t_point *s, int x, int y);

#endif