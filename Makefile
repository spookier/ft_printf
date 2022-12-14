# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acostin <acostin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 09:54:18 by acostin           #+#    #+#              #
#    Updated: 2022/12/14 01:26:08 by acostin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Variables
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Werror -Wextra


# Mandatory files
FILES = 	./ft_printf.c \
			print_all.c \
			utils1.c \
			utils2.c \

# Transform .c files into .o
OBJ_FILES = $(FILES:.c=.o)



all : $(NAME)

$(NAME) :
	$(CC) $(CFLAGS) -c $(FILES)
	ar rc $(NAME) $(OBJ_FILES)
	ranlib $(NAME)



# Clean all object files created
clean : 
	rm -rf *.o

# Clean all object files + the library created
fclean : 
	rm -rf *.o
	rm -rf $(NAME)
	rm -rf a.out

# Delete everything then rebuild
re : fclean all

# ----TEST-------- exec main test
ex : 
	make fclean && make all && clear && cc main.c libftprintf.a -Wall -Werror -Wextra && ./a.out


.PHONY : all clean fclean re