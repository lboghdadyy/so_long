#include "../includes/so_long_bonus.h"

void	ft_putchar(char c) {
	write(1, &c, 1);
}

void	ft_putnbr(int nb) {
	if (nb < 0) {
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10) {
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10) ft_putchar(nb + 48);
}

void    ft_print_moves(int  moves)
{
    write(1, "move --> ", 9);
    ft_putnbr(moves);
    write(1, "\n", 1);
}