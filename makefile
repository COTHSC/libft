# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jescully <jescully@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/18 09:50:54 by jescully          #+#    #+#              #
#    Updated: 2020/11/18 10:04:33 by jescully         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC =		ft_strlen.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_memcmp.c \
		ft_memmove.c \
		ft_memchr.c \
		ft_strrchr.c \
		ft_strchr.c \
		ft_strlcat.c \

OBJ =	$(SRC:.c=.o)

all:	
	$(name)

$(NAME):
	@$(CC) $(CFLAGS) -c $? $(SRC)
	@ar rc $(NAME) $? $(OBJ)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJ)
	@echo "\033[32mCleaned up object files.\033[0m"

re: fclean all


