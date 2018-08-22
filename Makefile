NAME = libfts.a
CC = nasm
CFLAGS = -f
LFLAGS = ar rc
OBJ_DIR = .objects
SRC_DIR = srcs
INC_DIR = includes
RM = rm -f

SRCS = ft_bzero.s

OBJS = $(patsubst %.s, $(OBJ_DIR)/%.o, $(SRCS))

PREFIX =

UNAME := $(shell uname -s)

ifeq ($(UNAME), Linux)
	CFLAGS += elf64
	PREFIX = -dLINUX=1
else
	CFLAGS += macho64
	PREFIX = --prefix _ -dOSX=1
endif

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(LFLAGS) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o	:	$(addprefix $(SRC_DIR)/, %.s)
	$(CC) $(CFLAGS) -o $@ $(PREFIX) $^

$(OBJ_DIR)	:
	mkdir -p $(OBJ_DIR)

test:
	gcc -Wall -Werror -Wextra -o test main.c $(NAME) -I $(INC_DIR)

.phony: clean re fclean

fclean: clean
		rm -rf $(OBJ_DIR)
		$(RM) $(NAME)

clean:
		$(RM) $(OBJS) test

re: fclean all

fre: fclean all test
