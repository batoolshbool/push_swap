NAME        = push_swap

INCLUDES    = -Iincludes -Ilibft
LIBFT_DIR   = libft
LIBFT       = $(LIBFT_DIR)/libft.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror $(INCLUDES)

SRC_DIR     = src
CMD_DIR     = src/commands

SRCS        = $(SRC_DIR)/push_swap.c \
              $(SRC_DIR)/radix_sort.c \
              $(SRC_DIR)/sort_small.c \
              $(SRC_DIR)/is_valid_input.c \
              $(SRC_DIR)/utils1.c \
              $(SRC_DIR)/utils2.c \
              $(CMD_DIR)/swap.c \
              $(CMD_DIR)/push.c \
              $(CMD_DIR)/rotate.c \
              $(CMD_DIR)/reverse_rotate.c \
			   $(SRC_DIR)/extra_file.c 

OBJS        = $(SRCS:.c=.o)

all: $(LIBFT) $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

clean:
	rm -f $(OBJS)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re