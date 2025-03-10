CC=cc
CFLAGS=-Wall -Wextra -Werror -fsanitize=address -g3
RM=rm -rf
NAME=so_long
SRC=Mandatory/so_long.c Mandatory/includes/ft_lst_utils.c Mandatory/includes/ft_strlen.c Mandatory/includes/ft_strstr.c Mandatory/includes/get_next_line.c \
	Mandatory/includes/get_next_line_utils.c Mandatory/includes/ft_strchr.c Mandatory/includes/ft_walls.c Mandatory/includes/ft_error.c \
	Mandatory/includes/ft_check_lenght.c Mandatory/includes/ft_substr.c Mandatory/includes/ft_split.c \
	Mandatory/includes/ft_check_player.c Mandatory/includes/ft_check_collections.c Mandatory/includes/ft_check_path.c \
	Mandatory/includes/ft_player_positions.c Mandatory/game/ft_redring_map.c Mandatory/game/ft_load_img.c
HEADER=Mandatory/includes/so_long.h
OBJ=$(SRC:.c=.o)
MLX_DIR = ../minilibx-linux
MLX = $(MLX_DIR)/libmlx.a
INCLUDES = -I$(MLX_DIR)
LIBS = -L$(MLX_DIR) -lmlx -lX11 -lXext -lm
all : $(NAME)


$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(MLX) $(LIBS) -o $(NAME)

%.o : %.c $(HEADER)
	@ $(CC) $(CFLAGS) $< -c -o $@

clean : 
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.phony : clean