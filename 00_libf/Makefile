# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 10:03:30 by mcrispim          #+#    #+#              #
#    Updated: 2024/11/16 10:07:01 by mcrispim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

SRCS = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c \
       ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
       ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
       ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
       ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strrchr.c \
       ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
       ft_putstr_fd.c
BONUS = 

OBJS= $(SRCS:.c=.o)
OBJ_B= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

bonus:			$(OBJS) $(OBJ_B)
				$(RM) $(NAME)
				ar rcs $(NAME) $(OBJS) $(OBJ_B)

clean:
				$(RM) $(OBJS) $(OBJ_B)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all bonus clean fclean re