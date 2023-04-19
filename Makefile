NAME = test.out

SRCS =  test.c get_next_line.c get_next_line_utils.c 

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(FLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	cc $(FLAGS) $(OBJS) -o $(NAME) 

install:
	python3 -m pip install --upgrade pip setuptools
	python3 -m pip install norminette
	sudo apt install valgrind -y

check:
	norminette $(SRCS)

run: clean fclean all
	./$(NAME)

test: all
	gcc -ggdb $(FLAGS) ft_printf.c $(NAME) -o result.out

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: clean fclean all
	rm -f $(OBJS) $(NAME)
	valgrind --leak-check=full ./result.out

.PHONY: clean fclean all re