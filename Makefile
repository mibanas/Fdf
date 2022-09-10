NAME = fdf

SRC =	fdf.c \
		get_next_line.c \
		kye_press.c \
		projection.c \
		sanabiham.c \
		tracer.c \
		ft_close.c \
		windows.c

OBJ = $(SRC:.c=.o)

FLAGS=	-Wall -Werror -Wextra

LIBFT= libft

LIB= -L./libft -lft -lmlx -framework OpenGL -framework AppKit

all: $(NAME)


$(NAME): $(OBJ)
	make -C $(LIBFT)
	gcc $(FLAGS) $(OBJ) $(LIB) -o $(NAME)

$(OBJ) :
	gcc $(FlAGS) -c $(SRC)

clean:
	make clean -C $(LIBFT)
	rm -rf $(OBJ)

fclean: clean
	make fclean -C $(LIBFT) 
	rm -rf $(NAME)

re: fclean all
