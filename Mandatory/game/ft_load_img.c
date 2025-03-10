#include "../includes/so_long.h"

void	ft_load_img(t_point *s)
{
	int	x;

	x = 50;
	s->wall = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/wall_50x50.xpm",
			&x, &x);
	s->space = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/space_50x50.xpm",
			&x, &x);
	s->player_img = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/player_50x50.xpm",
			&x, &x);
	s->coin = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/collection_1_50x50.xpm",
			&x, &x);
	s->exit_o = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/Exit_50x50.xpm",
			&x, &x);
	s->exit_c = mlx_xpm_file_to_image(s->mlx, "./Mandatory/img/closed_exit_1_optimized.xpm",
			&x, &x);
	if (!s->wall || !s->space || !s->player_img
		|| !s->coin || !s->exit_o || !s->exit_c)
        ft_error("Error : Invalid map componments!\n", s);
}