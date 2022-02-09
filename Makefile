##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## compiles my libmy
##

CC= gcc
RM = rm -rf
CFLAGS := -W -Wall -Werror -g3 -I ./include
LDFLAGS =
NAME = myprintf

SRC =	conv_base.c\
	conv_intDecimal.c\
	flag_c.c\
	flag_s.c\
	flag_u.c\
	lib_func.c\
	my_printf.c\

$(eval SRC = $(addprefix src/, $(SRC)))

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) -o $@ $^ $(LDFLAGS)

clean:
	$(RM) *o

fclean: clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re
