##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

CC      =       clang

SRC     =       src/*.c

OBJ     =       $(SRC:.c=.o)

NAME    =       my_sudo

RM      =       rm -rf

all:
		$(CC) $(SRC) -o $(NAME)

clean:
		$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

tests_run: clean
