# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jescully <jescully@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 09:50:54 by jescully          #+#    #+#              #
#    Updated: 2020/11/21 17:31:30 by jescully         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = clang-9

CFLAGS = -Wall -Wextra -Werror

SRC = ft_atoi.c \
	ft_ischar.c \
	ft_memchr.c \
	ft_putendl_fd.c \
	ft_strdup.c \
	ft_strncmp.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_ischarset.c \
	ft_memcmp.c \
	ft_putnbr_fd.c \
	ft_strjoin.c \
	ft_strnstr.c \
	ft_calloc.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_putstr_fd.c \
	ft_strlcat.c \
	ft_strrchr.c \
	ft_isalnum.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_split.c \
	ft_strlcpy.c \
	ft_strtrim.c \
	ft_isalpha.c \
	ft_itoa.c \
	ft_memset.c \
	ft_strchr.c \
	ft_strlen.c \
	ft_substr.c \
	ft_isascii.c \
	ft_memccpy.c \
	ft_putchar_fd.c \
	ft_strcpy.c \
	ft_strmapi.c \
	ft_tolower.c \


OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $? $(OBJ)
	ranlib $(NAME)

so: $(OBJ)
	$(CC) -shared -o libft.so $(OBJ)

clean:
	/bin/rm -f $(OBJ)
	echo "Cleaned up .o files"

fclean: clean
	/bin/rm -f $(NAME)
	echo "Cleaned up .o and .a files"

re: fclean all

