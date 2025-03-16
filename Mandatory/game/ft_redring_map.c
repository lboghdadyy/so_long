#include "../includes/so_long.h"

void    ft_initialisation(t_point *s)
{
	s->width = ft_strlen(s->map[0]) * 100;
	s->height = ft_size_array(s->map) * 100;
	s->mlx = mlx_init();
	if (!s->mlx)
		ft_error("Error : something is wrong with MLX!\n", s);
	s->win = mlx_new_window(s->mlx, s->width, s->height, "Sooooooo_long");
	if (!s->win)
		ft_error("Error : something is wrong with MLX!\n", s);
	if ((ft_strlen(s->map[0]) > 163 || ft_size_array(s->map) > 163))
	{
		ft_error(NULL, s);
	}
	s->coins = ft_how_many(s->map, 'C');
	s->moves = 0;
	s->wall = NULL;
	s->player_img = NULL;
	s->coin = NULL;
	s->exit= NULL;
	ft_load_img(s);
}

void	draw_img(t_point *s, int x, int y)
{
	if (s->map[y][x] == '1')
		mlx_put_image_to_window(s->mlx, s->win, s->wall, x * 100, y * 100);
	else if (s->map[y][x] == '0')
		mlx_put_image_to_window(s->mlx, s->win, s->space, x * 100, y * 100);
	else if (s->map[y][x] == 'P')
		mlx_put_image_to_window(s->mlx, s->win, s->player_img, x * 100, y * 100);
	else if (s->map[y][x] == 'C')
		mlx_put_image_to_window(s->mlx, s->win, s->coin, x * 100, y * 100);
	else if (s->map[y][x] == 'E')
		mlx_put_image_to_window(s->mlx, s->win, s->exit, x * 100, y * 100);
}

void	ft_put_image(t_point *s)
{
	int	x;
	int	y;

	y = 0;
	while (s->map[y])
	{
		x = 0;
		while (s->map[y][x])
		{
			draw_img(s, x, y);
			x++;
		}
		y++;
	}
}

int    ft_close(t_point *s)
{
	ft_exit_game(s);
	return (1);
}

void    ft_render_map(t_point *s)
{
	ft_initialisation(s);
	ft_put_image(s);
	mlx_key_hook(s->win, key_hook, s);
	mlx_hook(s->win, 17, 0, ft_close, s);
	mlx_loop(s->mlx);
}