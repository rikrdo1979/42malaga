# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 13:22:29 by rechever          #+#    #+#              #
#    Updated: 2022/05/01 13:22:47 by rechever         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		= 	ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strncmp.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memchr.c \
				ft_memcpy.c \

OBJS		= ${SRCS:.c=.o}
TARGET		= libft.a
INCLUDES	= includes
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: ${TARGET}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${TARGET}: ${OBJS}
	ar -rc ${TARGET} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re
