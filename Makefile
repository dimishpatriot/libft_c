# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcronus <lcronus@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/05/05 16:43:30 by lcronus           #+#    #+#              #
#    Updated: 2020/05/25 16:56:46 by lcronus          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang
NAME=libft.a
SRC_1=ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c\
	 ft_memcmp.c ft_strlen.c ft_strlcpy.c ft_strlcat.c ft_strchr.c\
	 ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_atoi.c ft_isalpha.c\
	 ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	 ft_toupper.c ft_tolower.c ft_calloc.c ft_strdup.c
SRC_2=ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
SRC_B=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
	  ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJ_1=$(SRC_1:.c=.o)
OBJ_2=$(SRC_2:.c=.o)
OBJ_B=$(SRC_B:.c=.o)
CFLAGS=-Wextra -Wall -Werror -std=c99

.PHONY: all clean fclean re bonus

default_target: all

all: $(NAME)
	@echo "make all - OK"

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "object $@ compiled..."

$(NAME): $(OBJ_1) $(OBJ_2)
	ar -rcs $(NAME) $(OBJ_1) $(OBJ_2)
	@echo ""
	@echo "libft.a compiled! :)"
	@echo ""

bonus: $(NAME) $(OBJ_B)
	ar -rs $(NAME) $(OBJ_B)
	@echo ""
	@echo "libft.a with bonus compiled!"
	@echo ""

clean:
	rm -f $(OBJ_1) $(OBJ_2) $(OBJ_B)
	@echo "clean - OK"

fclean: clean
	rm -f $(NAME) $(SO)
	@echo "fclean - OK"

re: fclean all
	@echo "re - OK"
