NAME = libftprintf.a

FILES = ft_printf.c\
		ft_putsft.c\
		ft_putdecimal.c\

CC = gcc

RM = rm -f

OBJECTS = $(FILES:.c=.o)

CFLAGS = -Werror -Wall -Wextra

all: $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)

clean:
	$(RM) $(NAME) $(OBJECTS)

fclean:
	$(RM) $(NAME) $(OBJECTS)

re: fclean all

.PHONY: all flclean clean re