# Variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

# path for srcs
SRCS_DIR = ./srcs/

# path for header
INCS_DIR = ./incs

# Mandatory files
FILES =        $(SRCS_DIR)ft_printf.c \
			$(SRCS_DIR)print_all.c \
			$(SRCS_DIR)utils1.c \
			$(SRCS_DIR)utils2.c \

# Transform .c files into .o
OBJ_FILES = $(FILES:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INCS_DIR)


all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)

# Clean all object files created
clean : 
	rm -rf $(OBJ_FILES)

# Clean all object files + the library created
fclean : clean
	rm -rf $(NAME)


.PHONY : all clean fclean