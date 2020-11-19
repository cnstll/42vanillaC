# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: calle <calle@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 10:07:58 by calle             #+#    #+#              #
#    Updated: 2020/11/19 12:29:42 by calle            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libft.a

SRCS = memset.c\
	bzero.c\
	memcpy.c\
	memccpy.c\
	memmove.c\
	memchr.c\
	memcmp.c\
	strlen.c\
	isalpha.c\
	isdigit.c\
	isalnum.c\
	isascii.c\
	isprint.c\
	toupper.c\
	tolower.c\
	strchr.c\
	strrchr.c\
	strncmp.c\
	strlcpy.c\
	strlcat.c\
	strnstr.c\
	atoi.c\
	calloc.c\
	strdup.c\

OBJS = $(SRCS:.c=.o)

HEADERS = libft.h

CPLHEADERS = libft.h.gch

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS) $(HEADERS)	 

.c.o : $(CC) -c $(SRCS) $(CFLAGS) 

clean :
	rm -f $(OBJS) $(CPLHEADERS)

fclean:	clean
	rm -f $(NAME)

re: fclean all
