##
## EPITECH PROJECT, 2020
## main Makefile
## File description:
## bootstrap bsq
##

SRC		=	sources/main.c	\
			sources/create_list.c	\
			sources/s.c	\
			sources/init.c	\
			sources/p.c	\
			sources/r.c	\
			sources/my_algo.c	\
			sources/check_sorted.c	\
			sources/display.c	\

SRC_TEST=	tests/test_check_sorted.c	\
			sources/s.c	\
			sources/my_algo.c	\
			sources/check_sorted.c	\
			sources/create_list.c	\
			sources/p.c	\
			sources/r.c	\
			sources/init.c	\

CFLAGS	=	-W -Wall -Wextra -Werror -g

CRITFLAGS=	-lcriterion --coverage

INC		=	-I include/

LFLAGS	=	-L lib/my -lmy

NAME	=	push_swap

NAME_TEST=	unit_test

all:
	make -C ./lib/my all
	gcc -o $(NAME) $(SRC) $(LFLAGS) $(INC) $(CFLAGS)

clean:
	make -C ./lib/my clean
	rm -f *~
	rm -f *.gc*
	rm -f sources/*~
	rm -f include/*~

fclean: clean
	make -C ./lib/my fclean
	rm -f $(NAME)
	rm -f $(NAME_TEST)

re: fclean all

tests_run: re
	gcc $(SRC_TEST) -o $(NAME_TEST) $(CRITFLAGS) $(INC) $(LFLAGS)
	./$(NAME_TEST)
	-gcovr --exclude tests
	-gcovr -b --exclude tests
