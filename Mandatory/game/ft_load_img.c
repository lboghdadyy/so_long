#include "../includes/so_long.h"

void	ft_load_img(t_point *s)
{
	int	x;

	x = 100;
	s->wall = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/wall_1_100x100.xpm",
			&x, &x);
	s->space = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/space_1_100x100.xpm",
			&x, &x);
	s->player_img = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/player_1_100x100.xpm",
			&x, &x);
	s->coin = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/collection_100x100.xpm",
			&x, &x);
	s->exit = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/closed_exit_finished_100x100.xpm",
			&x, &x);
	if (!s->wall || !s->space || !s->player_img
		|| !s->coin || !s->exit)
        ft_exit_game(s);
}