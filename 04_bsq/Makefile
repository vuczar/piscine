# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: masalaib <masalaib@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/21 13:53:08 by masalaib          #+#    #+#              #
#    Updated: 2026/04/21 22:52:36 by masalaib         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = bsq
CC      = cc
CFLAGS  = -Wall -Wextra -Werror

# Lista de todos os seus arquivos .c (Verifique se os nomes batem)
SRCS    = main.c \
		  split.c \
		  struct_handle.c \
		  utils.c \
		  complete_obs.c \
		  find_init.c \
		  printer.c \
		  error_handle.c \

# Transforma a lista de .c em .o dentro da pasta obj
OBJS    = $(SRCS:%.c=obj/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

# Regra para criar a pasta obj e compilar os arquivos
obj/%.o: %.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	rm -rf obj

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
