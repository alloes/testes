# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 07:16:43 by alopes-n          #+#    #+#              #
#    Updated: 2022/09/02 12:48:33 by alopes-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c printf_putchar.c printf_putstr.c printf_puthex.c \
			printf_putpointer.c printf_putnbr.c printf_putunsigned.c

OBJS	=	$(SRCS:.c=.o)

HEADER	=	ft_printf.h

CFLAGS	=	-Wall -Wextra -Werror

all:	$(NAME)

.c.o:	$(HEADER) Makefile
	cc $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all

.PHONY:	all clean fclean re