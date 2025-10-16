NAME = rush_02

COMPILALO = cc

SRCS = main.c dict_to_str.c filter.c prints.c

LASCFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all = $(NAME)

$(NAME) : $(SRCS) header.h
		$(COMPILALO) $(LASCFLAGS) $(SRCS) -o $(NAME)
clean:
	rm -f $(NAME)
fclean: clean