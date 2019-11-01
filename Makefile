# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 23:42:48 by nhariman       #+#    #+#                 #
#    Updated: 2019/11/01 06:30:43 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = gcc

FLAGS = -Wall -Werror -Wextra

CFILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
ft_isdigit.c ft_isprint.c ft_memccpy.c ft_memchr.c ft_memcpy.c ft_memmove.c \
ft_memset.c ft_putchar.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
ft_putstr.c ft_putstr_fd.c ft_strlen.c ft_tolower.c ft_toupper.c ft_memcmp.c ft_strdup.c ft_calloc.c ft_strchr.c main.c

OFILES = $(CFILES:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	ar rcs $@ $^

%.o: %.c libft.h
	$(COMPILE) -c $(FLAGS) -o $@ $<

clean:
	$(RM) $(OFILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all
