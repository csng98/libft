# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csekakul <csekakul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/13 10:06:24 by csekakul          #+#    #+#              #
#    Updated: 2026/01/26 11:55:35 by csekakul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c \
		ft_isdigit.c \
		ft_lstdelone.c \
		ft_memchr.c	\
		ft_putendl_fd.c \
		ft_striteri.c \
		ft_strncmp.c \
		ft_toupper.c \
		ft_bzero.c \
		ft_isprint.c \
		ft_lstiter.c \
		ft_memcmp.c	\
		ft_putnbr_fd.c \
		ft_strjoin.c \
		ft_strnstr.c \
		ft_calloc.c \
		ft_itoa.c \
		ft_lstlast.c \
		ft_memcpy.c	\
		ft_putstr_fd.c \
		ft_strlcat.c \
		ft_strrchr.c \
		ft_isalnum.c \
		ft_lstadd_back.c \
		ft_lstmap.c	\
		ft_memmove.c \
		ft_split.c \
		ft_strlcpy.c \
		ft_strtrim.c \
		ft_isalpha.c \
		ft_lstadd_front.c \
		ft_lstnew.c	\
		ft_memset.c	\
		ft_strchr.c	\
		ft_strlen.c	\
		ft_substr.c \
		ft_isascii.c \
		ft_lstclear.c \
		ft_lstsize.c \
		ft_putchar_fd.c \
		ft_strdup.c	\
		ft_strmapi.c \
		ft_tolower.c \

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
		ar -rcs $(NAME) $(OBJS)
bonus: $(OBJS)
		ar -rcs $(NAME) $(OBJS)

clean:
		rm -f $(OBJS)
fclean: clean
		rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
