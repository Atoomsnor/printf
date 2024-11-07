# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: roversch <roversch@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:21:20 by roversch          #+#    #+#              #
#    Updated: 2024/11/07 16:29:54 by roversch         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCDIR = source
SRCLIT = print_char.c
SRCS	= $(addprefix $(SRCDIR)/,$(SRCLIT))
OBJ		= $(SRCS:.c=.o)
INCLDIR	= ./include
INCLFT	= ./libft
INCLALL	= $(INCLDIR) $(INCLFT)
INCLS	= $(addprefix -I ,$(INCLALL))
LIBFTNAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LINFTDOR = ./libft

all: $(NAME)

$(NAME): $(OBJ) $(LIBFTNAME)
	@ar rc $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $(CFLAGS) $(INCLS) -c $< -o $@

clean:
	make -C libft clean
	@rm -f $(OBJ)

$(LIBFTNAME)	:
				make -C libft

fclean: clean
	make -C libft fclean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re