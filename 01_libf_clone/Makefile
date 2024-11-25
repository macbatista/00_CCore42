# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcrispim <mcrispim@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/16 12:51:22 by mcrispim          #+#    #+#              #
#    Updated: 2024/11/25 12:24:58 by mcrispim         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= libft.a

SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memchr.c \
	   ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
	   ft_memset.c \
	   ft_putchar_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c \
       ft_putstr_fd.c \
	   ft_split.c \
	   ft_strchr.c \
	   ft_strdup.c \
	   ft_striteri.c \
	   ft_strjoin.c \
       ft_strlcat.c \
	   ft_strlcpy.c \
	   ft_strlen.c \
	   ft_strmapi.c \
	   ft_strncmp.c \
       ft_strnstr.c \
	   ft_strrchr.c \
	   ft_strtrim.c \
	   ft_substr.c \
	   ft_tolower.c \
       ft_toupper.c

OBJS= $(SRCS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

all:			$(NAME)
	
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[43mCompiling: $< -> $@"\

$(NAME):		$(OBJS)
				@ar rcs $(NAME) $(OBJS)
				@echo "\033[1;31;42mAll DONE\033[0m"

clean:
				@$(RM) $(OBJS)
				@echo "\033[43mFiles .o deleted successfully\033[0m"

fclean:			clean
				@$(RM) $(NAME)
				@echo "\033[1;32;41m$(NAME) deleted successfully\033[0m"

re:				fclean $(NAME)

.PHONY:			all clean fclean re
