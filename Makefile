# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alvadelg <alvadelg@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/30 12:43:42 by alvadelg          #+#    #+#              #
#    Updated: 2025/02/19 17:07:14 by alvadelg         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putchar.c ft_putnbr.c ft_num_nosign.c ft_punt_hexa.c \
                ft_putstr.c ft_strlen.c ft_hexa_min.c ft_hexa_mayus.c

INCLUDE = ft_printf.h

CC = gcc
RM = rm -f
AR = ar rcs
CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${INCLUDE}
		@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
		@${AR} ${NAME} ${OBJS}
		@echo "\n$(GREEN) Created $(NAME) ✓ $(DEF_COLOR)\n"

clean:
		@${RM} ${OBJS}
		@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean:
		@${RM} ${OBJS}
		@${RM} ${NAME}
		@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
