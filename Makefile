NAME	= test
SRC		= $(wildcard *.c)
OBJ		= $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(OBJ)

re: clean all
