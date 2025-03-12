#include "../includes/so_long_bonus.h"

void	ft_load_img(t_point *s)
{
	int	x;

	x = 50;
	s->wall = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/wall_1_100x100.xpm",
			&x, &x);
	s->space = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/space_1_100x100.xpm",
			&x, &x);
	s->player_img = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/player_1_100x100.xpm",
			&x, &x);
	s->coin = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/collection_100x100.xpm",
			&x, &x);
	s->exit_o = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/Exit_1_100x100.xpm",
			&x, &x);
	s->exit_c = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/closed_exit_finished_100x100.xpm",
			&x, &x);
	s->enemy = mlx_xpm_file_to_image(s->mlx, "./Bonus/img/kokain_enemy_100x100.xpm", &x, &x);
	if (!s->wall || !s->space || !s->player_img
		|| !s->coin || !s->exit_o || !s->exit_c)
        ft_exit_game(s);
}