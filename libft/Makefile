# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: jodoming <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/11/27 00:32:54 by jodoming     #+#   ##    ##    #+#        #
#    Updated: 2018/02/24 13:47:02 by jodoming    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_strcpy.c ft_strcat.c ft_strlen.c ft_memalloc.c ft_strnew.c \
	   ft_strjoin.c

INC = libft.h

OBJ = $(addprefix objects/, $(SRCS:.c=.o))

CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

.PHONY: clean fclean re

objects:
	mkdir objects/

objects/%.o: ./%.c | objects
	gcc $(CFLAGS) -I $(INC) -c $< -o $@

$(NAME): $(OBJ)
	ar rcs $@ $(OBJ)

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -rf objects

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
