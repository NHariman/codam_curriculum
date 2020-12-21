# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/10/31 23:42:48 by nhariman      #+#    #+#                  #
#    Updated: 2020/12/21 19:27:14 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = 	gcc

FLAGS = 	-Wall -Werror -Wextra

CFILES = 	ft_atoi.c \
			ft_bzero.c \
			ft_isspecial.c \
			ft_isalnum.c \
			ft_isalpha.c\
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memccpy.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_putstr_fd.c \
			get_next_line.c \
			ft_strlen.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memcmp.c \
			ft_strdup.c \
			ft_make_single_char_str.c \
			ft_calloc.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strnstr.c \
			ft_strlcpy.c \
			ft_strncmp.c \
			ft_strcasecmp.c \
			ft_strcmp.c \
			ft_strlower.c \
			ft_strlcat.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strjointwo.c \
			gnl_strjoin.c \
			ft_charjoin.c \
			ft_strtrim.c \
			ft_strtrimfree.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_iswhitespaces.c \
			arrays/ft_add_arr_back.c \
			arrays/ft_add_arr_front.c \
			arrays/ft_arr_to_str_nl.c \
			arrays/ft_arr_to_str_sp.c \
			arrays/ft_arr_to_str.c \
			arrays/ft_arrdup.c \
			arrays/ft_arrlen.c \
			arrays/ft_empty_array.c \
			arrays/ft_free_array.c \
			dprintf/ft_dprintf.c \
			dprintf/ft_dprintf_flags.c \
			dprintf/ft_dprintf_hexflags.c \
			dprintf/ft_dprintf_numflags.c \
			dprintf/ft_dprintf_num.c \
			dprintf/ft_dprintf_str.c \
			printf/ft_printf.c \
			printf/ft_printf_flags.c \
			printf/ft_printf_hexflags.c \
			printf/ft_printf_numflags.c \
			printf/ft_printf_num.c \
			printf/ft_printf_str.c \
			printf_err/ft_printf_err.c \
			printf_err/ft_printf_err_flags.c \
			printf_err/ft_printf_err_hexflags.c \
			printf_err/ft_printf_err_numflags.c \
			printf_err/ft_printf_err_num.c \
			printf_err/ft_printf_err_str.c

CBONUS =	linked_list/ft_lstnew_bonus.c \
			linked_list/ft_lstadd_front_bonus.c \
			linked_list/ft_lstsize_bonus.c \
			linked_list/ft_lstlast_bonus.c \
			linked_list/ft_lstadd_back_bonus.c \
			linked_list/ft_lstdelone_bonus.c \
			linked_list/ft_lstiter_bonus.c \
			linked_list/ft_lstclear_bonus.c \
			linked_list/ft_lstmap_bonus.c

OFILES = $(CFILES:.c=.o)

OBONUS = $(CBONUS:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OFILES)
	@ar rcs $@ $^

%.o: %.c libft.h
	@$(COMPILE) -c $(FLAGS) -o $@ $<

clean:
	@$(RM) $(OFILES) $(OBONUS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

lldb: fclean
	$(COMPILE) -g $(CFILES) -I./

bonus: $(OFILES) $(OBONUS)
	@ar rcs $(NAME) $^
