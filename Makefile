# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccormon <ccormon@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 15:48:31 by ccormon           #+#    #+#              #
#    Updated: 2023/10/30 18:23:54 by ccormon          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc -Wall -Wextra -Werror
NAME = libftprintf.a
SRC =	ft_printf.c\
		ft_printfchar.c\
		ft_printfhex.c\
		ft_printfnbr.c\
		ft_printfpointer.c\
		ft_printfstr.c\
		ft_printfunbr.c\
		ft_putchar.c\
		ft_puthex.c\
		ft_putnbr.c\
		ft_putstr.c\
		ft_strlen.c\

#SRC_BONUS =
#
OBJ = $(SRC:.c=.o)
#OBJ_BONUS = $(SRC_BONUS:.c=.o)

all : $(NAME)

%.o : %.c
	$(CC) -o $@ -c $^

$(NAME) : $(OBJ)
	ar crs $(NAME) $(OBJ)

#bonus : $(OBJ) $(OBJ_BONUS)
#	ar crs $(NAME) $(OBJ) $(OBJ_BONUS)
#
clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all

# $@ nom de la cible
# $< premiere dependance
# $^ liste de dependance
# $? liste de dependance plus recente
# $* nom du fichier sans son extension
