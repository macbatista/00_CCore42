NAME			= libftprintf.a

SRC = main.c aux1.c
OBJ = $(SRC:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
 
$(NAME): $(OBJ)
	ar rsc $(NAME) $(OBJ)
 
clean:
	$(RM) $(OBJ)
 
fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re