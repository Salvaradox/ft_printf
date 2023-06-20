NAME = libftprintf.a
FILES = ft_printf.c\

CC = gcc
RM = rm -ft_printf
OBJECTS = $(FILES:.c=.o)
CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

clean:
	$(RM) $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all flclean clean re