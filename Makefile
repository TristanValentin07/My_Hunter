##
## EPITECH PROJECT, 2022
## Untitled (Workspace)
## File description:
## Makefile
##

CC = gcc -g -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -o

SRC =	main.c							\
		src/my_hunter.c					\
		src/close.c						\
		src/import_texture.c			\
		src/draw.c						\
		src/create_sprite.c				\
		src/set_texture.c				\
		src/set_ship_texture.c			\
		src/init_clock.c				\
		src/clock.c						\
		src/start_random_pos.c			\
		src/create_cursor.c				\
		src/destroy.c					\
		src/kill_ship.c					\
		src/call_clock.c				\
		src/call_const_assets.c			\
		src/menu/play_button.c			\
		src/menu/set_button_pos.c		\
		src/menu/quit_button.c			\
		src/call_event.c				\
		src/music.c						\

TESTNAME	=	unit_tests	\

TEST_LIST	=	tests/testunit.c	\

TEST = $(TESTNAME) $(SRC) $(TEST_LIST) --coverage -lcriterion

OBJ	=	$(SRC:.c=.o)

NAME =	my_hunter	\

CFLAGS = -Wall -Wextra -L ./lib -lmy -I ./include

all: Makelib $(NAME)

$(NAME):	$(OBJ)
	$(CC) $(NAME) $(OBJ) $(CFLAGS)

Makelib:
	make -C ./lib/my
	@echo -e "\n\e[92mSuccessfully compiled\e[0m"

unit_tests: fclean ./lib/my
	$(CC) -o $(TEST) $(TESTNAME) $(CFLAGS)
	@echo -e "\n\e[92mUnit Tests fonctional\e[0m"

test_run: unit_tests
	./$(TESTNAME) && gcovr --exclude tests/

clean:
	make fclean -C ./lib/my
	@echo -e "\n\e[92mSuccessfully clean\e[0m"

fclean: clean
	rm -f $(OBJ)
	rm -f $(NAME)
	clear

re: clean fclean all

.PHONY: all clean fclean re debug
