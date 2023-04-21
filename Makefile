NAME = libft.a
FLAGS = -Wall -Werror -Wextra
FILES = ft_isalnum.c\
		ft_isalpha.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isprin.c\
		ft_strlen.c\
		ft_strncmp.c\
		ft_tolower.c\
		ft_toupper.c\
OBJS = $(Files:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
$(OBJS) : $(FILES)
	gcc $(FLAGS) -c $(FILES)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME) $(OBJS)

re: all

.PHONY : all re fclean clean