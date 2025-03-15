CC=cc
CFLAGS=-Wall -Wextra -Werror #-fsanitize=address -g3
RM=rm -rf
NAME=so_long
SRC=Mandatory/so_long.c Mandatory/includes/ft_strlen.c Mandatory/includes/ft_strstr.c Mandatory/includes/get_next_line.c \
	Mandatory/includes/get_next_line_utils.c Mandatory/includes/ft_strchr.c Mandatory/includes/ft_walls.c Mandatory/includes/ft_error.c \
	Mandatory/includes/ft_check_lenght.c Mandatory/includes/ft_substr.c Mandatory/includes/ft_split.c \
	Mandatory/includes/ft_check_player.c Mandatory/includes/ft_check_collections.c Mandatory/includes/ft_check_path.c \
	Mandatory/includes/ft_player_positions.c Mandatory/game/ft_redring_map.c Mandatory/game/ft_load_img.c \
	Mandatory/game/ft_moves.c Mandatory/game/ft_player_moves.c Mandatory/game/ft_how_many.c Mandatory/game/ft_won.c \
	Mandatory/game/ft_print_moves.c Mandatory/game/ft_destroy_imgs.c Mandatory/includes/ft_strrstr.c
HEADER=Mandatory/includes/so_long.h
B_SRC=$(patsubst Mandatory/%.c, Bonus/%_bonus.c, $(SRC)) Bonus/game/ft_move_enemy.c Bonus/game/ft_you_lose.c Bonus/includes/ft_itoa.c \
	Bonus/includes/ft_strjoin.c Bonus/game/ft_draw_player.c Bonus/includes/ft_lst_utils_bonus.c
B_OBJ=$(B_SRC:.c=.o)
OBJ=$(SRC:.c=.o)
MLX_DIR = ../minilibx-linux
MLX = $(MLX_DIR)/libmlx.a
INCLUDES = -I$(MLX_DIR)
LIBS = -L$(MLX_DIR) -lmlx -lX11 -lXext -lm
BONUS_NAME=so_long_bonus
BONUS_HEADER=Bonus/includes/so_long_bonus.h
all : $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MLX) $(LIBS) -o $(NAME)

%.o : %.c $(HEADER)
	@ $(CC) $(CFLAGS) $< -c -o $@

Bonus/%.o: Bonus/%.c $(BONUS_HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

bonus : $(BONUS_NAME)

$(BONUS_NAME) : $(B_OBJ)
	$(CC) $(CFLAGS) $(B_OBJ) $(MLX) $(LIBS) -o $(BONUS_NAME)
clean : 
	$(RM) $(OBJ) $(B_OBJ)

fclean : clean
	$(RM) $(NAME) $(BONUS_NAME)

re : fclean all

.phony : clean