NAME = bsq
CC = cc
CFLAGS =  -Wall -Werror -Wextra
CFLAGS += -fsanitize=address -g3
# TEST_DIR = ./spec/
SRC_DIR = src/
OBJ_DIR = obj/

SRCS = main.c \
		parse.c \
		find_square.c

OBJS = $(addprefix $(OBJ_DIR),$(SRCS:.c=.o))
HEADER = -I ./include
# HEADER = -I ./include -I ./lib/GNL/src/ -I ./lib/Libft/
# LIBFT = "./lib/Libft"
# LIBGNL = "./lib/GNL"

all: $(NAME)

$(OBJ_DIR):
	mkdir -p ./obj

# $(NAME): $(OBJ_DIR) $(OBJS) $(addprefix $(SRC_DIR)) libft libgnl
# 	$(CC) $(CFLAGS) $(HEADER) -L $(LIBFT) -lft -L $(LIBGNL) -lgnl $(addprefix $(SRC_DIR),$(PS)) $(OBJS) -o $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(CC) $(CFLAGS) $(HEADER) $(OBJS) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) $(CFLAGS) $(HEADER) -c $^ -o $@

# $(OBJ_PRINTER): $(SRCS_PRINTER)
# 	@$(CC) $(CFLAGS) $(HEADER) -c $^ -o $@

clean:
	rm -f $(OBJS)
#	@make fclean -C ./lib/LIBFT/
#	@make fclean -C ./lib/GNL/

fclean: clean
	rm -f $(NAME)
	rm -rf ./obj

re: fclean all

# libft:
# 	@make -C ./lib/Libft/

# libgnl:
# 	@make -C ./lib/GNL/

.PHONY: all clean fclean re
