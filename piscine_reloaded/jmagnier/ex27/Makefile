NAME = ft_display_file

SRC = ft_display_file.c

FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) $(SRC)
	gcc -o $(NAME) ft_display_file.o

clean:
	/bin/rm -f ft_display_file.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
