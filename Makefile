# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alopes-n <alopes-n@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 07:16:43 by alopes-n          #+#    #+#              #
#    Updated: 2022/09/03 19:30:22 by alopes-n         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRCS	=	ft_printf.c printf_putchar.c printf_putstr.c printf_puthex.c \
			printf_putpointer.c printf_putnbr.c printf_putunsigned.c

INCLUDES	=	-I ./ -I ./libft

OBJS	=	$(SRCS:.c=.o)

HEADER	=	ft_printf.h

CFLAGS	=	-Wall -Wextra -Werror

CC		=	cc

all:	$(NAME)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(NAME):	$(OBJS)
	make all -C libft/
	cp ./libft/libft.a libftprintf.a
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C libft/

fclean:	clean
	rm -f $(NAME)
	make fclean -C libft/

re:	fclean all

.PHONY:	all clean fclean re