#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ddryha <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 18:38:55 by ddryha            #+#    #+#              #
#    Updated: 2017/10/25 18:38:56 by ddryha           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror
NAME = ft_display_file
PROG = main.c
OBJECTS = main.o

all: $(NAME)

$(NAME): 
	$(CC) $(CFLAGS) $(PROG)
	$(CC) -o $(NAME) $(OBJECTS)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
