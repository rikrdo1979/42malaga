# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rechever <rechever@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/01 13:22:29 by rechever          #+#    #+#              #
#    Updated: 2022/05/11 17:16:08 by rechever         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC		= 		ft_isalpha.c \
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
				ft_memcmp.c \
				ft_memmove.c \
				ft_strnstr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_atoi.c \
				ft_calloc.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strjoin.c \

OBJ			= ${SRC:.c=.o}
TARGET		= libft.a
INCLUDES	= includes
CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -f

all: ${TARGET}

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC)
	gcc -nostartfiles -shared -o libft.so $(OBJ)
	
%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@ -I ${INCLUDES}

${TARGET}: ${OBJ}
	ar -rc ${TARGET} ${OBJ}

clean:
	${RM} ${OBJ}

fclean:
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re
