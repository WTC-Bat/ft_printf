# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mvanwyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/06/02 13:42:07 by mvanwyk           #+#    #+#              #
#    Updated: 2016/06/02 16:17:04 by mvanwyk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = "./src/"
FLAGS = -Wall -Wextra -Werror
OPTIONS = -c -I "./includes/"
SRCS = $(SRC)extra_formatting.c $(SRC)ft_printf.c $(SRC)handle_c.c \
		$(SRC)handle_cap_c.c $(SRC)handle_cap_s.c $(SRC)handle_i.c \
		$(SRC)handle_p.c $(SRC)handle_s.c $(SRC)has_checks.c \
		$(SRC)is_checks.c $(SRC)mod_ops.c $(SRC)type_handling.c \
		$(SRC)fmt_i.c $(SRC)handle_u.c $(SRC)check_length.c \
		$(SRC)fmt_u.c $(SRC)handle_o.c $(SRC)handle_x.c \
		$(SRC)fmt_o.c $(SRC)fmt_x.c
		

OBJS = ./extra_formatting.o ./ft_printf.o ./handle_c.o ./handle_cap_c.o \
		./handle_cap_s.o ./handle_i.o ./handle_p.o ./handle_s.o \
		./has_checks.o ./is_checks.o ./mod_ops.o ./type_handling.o \
		./fmt_i.o ./handle_u.o ./check_length.o ./fmt_u.o ./handle_o.o \
		./handle_x.o ./fmt_o.o ./fmt_x.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) $(OPTIONS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

