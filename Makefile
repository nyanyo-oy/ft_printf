# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kenakamu <kenakamu@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/11 15:25:14 by kenakamu          #+#    #+#              #
#    Updated: 2025/05/11 15:25:15 by kenakamu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror -gdwarf-4
SRCS		=	ft_printf.c		\
				ft_putchar.c	\
				ft_putstr.c		\
				ft_putnbr.c		\
				ft_put_hex.c	\
				ft_put_ptr.c	\
				ft_put_un.c


OBJS		=	$(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
