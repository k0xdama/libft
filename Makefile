# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/28 22:11:27 by u4s2e0r           #+#    #+#              #
#    Updated: 2023/06/14 22:14:08 by pmateo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC     = gcc
CFLAGS = -Wall -Werror -Wextra
AR     = ar rcs

SRC    = 	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
			ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memset.c \
			ft_putchar_fd.c ft_putendl.c ft_putnbr_fd.c ft_putstr_fd.c ft_strdup.c \
			ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
			 ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

BONUS	=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
			ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJ    = $(SRC:.c=.o)

OBJ_BONUS	= $(BONUS:.c=o)

LIBFT  = libft.a

all: $(LIBFT)

$(LIBFT): $(OBJ)
	$(AR) $@ $(OBJ)

bonus: $(OBJ_BONUS)
	$(AR) $@ $(OBJ_BONUS)
	

# %.o: %.CC
# 	$(CC) $(CFLAGS) -c $< -o $@
# Utile ? A quoi ?

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(LIBFT)

re: fclean all

.PHONY: all clean fclean re
