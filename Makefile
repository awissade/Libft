# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: awissade <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 11:35:36 by awissade          #+#    #+#              #
#    Updated: 2023/11/30 12:54:10 by awissade         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a
SOURCES			=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
					ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
					ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c\
					ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c\
					ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
					ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c\
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
S_OBJECTS		=	$(SOURCES:%.c=%.o)

BONUS_SOURCES	=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c\
					ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c\
					ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
B_OBJECTS		=	$(BONUS_SOURCES:%.c=%.o)

CC				=	cc
CFLAGS			=	-Wextra -Wall -Werror

all				:	$(NAME)

$(NAME)			:	$(S_OBJECTS)
				ar rcs $(NAME) $(S_OBJECTS)

bonus			:	$(B_OBJECTS)

$(B_OBJECTS)	:	$(BONUS_SOURCES)
					$(CC) $(CFLAGS) -c $(BONUS_SOURCES)
					ar rcs $(NAME) $(B_OBJECTS)

clean			:
					rm -rf $(S_OBJECTS) $(B_OBJECTS)

fclean			:	clean
					rm -rf $(NAME)

re				:	fclean $(NAME)

.PHONY			:	all bonus clean fclean re
