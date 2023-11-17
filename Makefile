NAME = karutasorter.out
SRC= sources/main.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c
OBJS=$(SRC:.c=.o)

all:
	$(CC) $(SRC)

clean:
	$(RM) $(OBJS)

fclean:
	$(RM) $(OBJS) $(NAME)

re: fclean all