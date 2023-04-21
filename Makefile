NAME = test.out

SRCS =  get_next_line.c get_next_line_utils.c

OBJS = $(SRCS:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o: %.c
	cc $(FLAGS) -c $< -o $@

UNITY_TEST = tests/*.c tests/*.h

all: $(NAME)

$(NAME): $(OBJS)
	cc $(FLAGS) $(OBJS) -o $(NAME) 

install:
	python3 -m pip install --upgrade pip setuptools
	python3 -m pip install norminette
	sudo apt install valgrind -y

check:
	norminette $(SRCS)

test:
	gcc -D BUFFER_SIZE=1 -ggdb $(FLAGS) $(UNITY_TEST) $(SRCS) -o test.out
	./test.out

	gcc -D BUFFER_SIZE=42 -ggdb $(FLAGS) $(UNITY_TEST) $(SRCS) -o test.out
	./test.out

	gcc -D BUFFER_SIZE=1000 -ggdb $(FLAGS) $(UNITY_TEST) $(SRCS) -o test.out
	./test.out

	gcc -D BUFFER_SIZE=10000000 -ggdb $(FLAGS) $(UNITY_TEST) $(SRCS) -o test.out
	./test.out

run: clean fclean all
	./$(NAME)

debug:
	gcc -ggdb $(SRCS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

valgrind: test
	valgrind --leak-check=full ./$(NAME)
	rm -f $(OBJS) $(NAME)

.PHONY: clean fclean all re