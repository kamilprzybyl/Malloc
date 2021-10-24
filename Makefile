ifeq ($(HOSTTYPE),)
	HOSTTYPE := $(shell uname -m)_$(shell uname -s)
endif

CC 			= gcc
CFLAGS 		= -Wall -Wextra -Werror -fPIC -c 
NAME 		= libft_malloc_$(HOSTTYPE).so
SLINK 		= libft_malloc.so
SRCS 		= src/malloc.c \
			  src/free.c \
			  src/realloc.c \
			  src/show_alloc_mem.c \
			  src/utils/setup_heap.c \
			  src/utils/find_free_block.c \
			  src/utils/ret_mem_block.c
OBJS 		= $(SRCS:.c=.o)

all: $(NAME)
  
%.o: %.c
	@$(CC) $(CFLAGS) $^ -o $@ -I inc/ 

$(NAME): $(OBJS)
	@make -C Libft
	@$(CC) -shared -o $@ $^ Libft/libft.a
	@rm -f $(SLINK)
	@ln -s $@ $(SLINK)		
	@echo "\033[32m$(NAME) built!\033[0m"

test:
	@gcc src/test.c -L. $(SLINK) -o $@
	@echo "\033[32mtest built!\033[0m"
	@./test

clean:
	@make -C Libft clean
	@/bin/rm -rf $(OBJS)

fclean: clean
	@make -C Libft fclean
	@/bin/rm -rf $(NAME) test

re: fclean all

.PHONY: all clean fclean re