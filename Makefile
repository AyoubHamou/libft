# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahamou <ahamou@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 19:26:31 by ahamou            #+#    #+#              #
#    Updated: 2022/11/08 05:45:37 by ahamou           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_striteri.c\
	ft_strdup.c  ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c  ft_tolower.c ft_toupper.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c 

BSRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c \
		ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c \
		ft_lstiter_bonus.c

OBJS = $(SRCS:.c=.o)

BOBJS = $(BSRCS:.c=.o)

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): 	$(OBJS)
			ar -rc $(NAME) $(OBJS)

bonus :		$(BOBJS)
			@ar -rc $(NAME) $(BOBJS)

clean:
	rm -rf $(OBJS) $(BOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
