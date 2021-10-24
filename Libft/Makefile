CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
HEADERS = includes/
SRCS = srcs

$(NAME): all
 
all: 
	@$(CC) -c $(CFLAGS) -I $(HEADERS) $(SRCS)/*.c $(SRCS)/ft_printf/*.c
	@ar -rc $(NAME) *.o
	@echo "\033[32m$(NAME) built!\033[0m"

	
clean:
	@/bin/rm -fr *.o

fclean: clean
	@/bin/rm -fr $(NAME) a.out

re: fclean all

.PHONY: all clean fclean re