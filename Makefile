NAME = ft_ls
FILES = main
SRC = $(addprefix ./src/, $(patsubst %, %.c, $(FILES)))
OBJ = $(addprefix ./objects/, $(patsubst %, %.o, $(FILES)))
FLAGS = -I libft/includes -I includes -Wall -Werror -Wextra
LFLAGS= -L libft -lft

.SILENT:

all:	$(NAME)

$(NAME): $(OBJ)
	make -C libft
	gcc $(LFLAGS) $^ -o $(NAME)

./objects/%.o: ./src/%.c
	mkdir -p objects
	gcc $(FLAGS) -c $< -o $@

clean:
	make -C libft/ fclean
	rm -rf ./objects

fclean:
	$(MAKE) clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all
