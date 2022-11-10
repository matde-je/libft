# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: matde-je <matde-je@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 14:50:52 by matde-je          #+#    #+#              #
#    Updated: 2022/11/10 01:26:39 by matde-je         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# NAME := libft.a
# CC	:= cc
# CFLAGS 	:= -Wall -Wextra -Werror -c
# OBJ	:= $(patsubst %.c, %.o,$(wildcard *.c))

# #bonus:		$(NAME) $(BONUS.O)
# #			ar -rcs $(NAME) $(BONUS.O)

# all: $(NAME)

# $(NAME): $(OBJ) | libft.h 
# 	ar -crs libft.a *.o
# %.o: %.c
# 	$(CC) $(CFLAGS) $^

# .PHONY : clean re fclean all

# clean: 
# 	rm -f *.o
# fclean: clean
# 	rm -f $(NAME)
# re: fclean all
SOURCES	=	ft_atoi.c		\
			ft_bzero.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_strchr.c		\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_tolower.c	\
			ft_toupper.c	\
			ft_strdup.c		\
			ft_calloc.c		\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_strjoin.c	\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_striteri.c 	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_split.c

BONUS	=	ft_lstnew.c			\
			ft_lstadd_front.c	\
			ft_lstadd_back.c	\
			ft_lstlast.c		\
			ft_lstsize.c		\
# 			ft_lstclear.c		\
# 			ft_lstdelone.c		\
# 			ft_lstmap.c			\
# 			ft_lstiter.c		\
			
NAME 	=	libft.a
OBJECTS	=	$(SOURCES:.c=.o)
BONUS.O	=	$(BONUS:.c=.o)
GCC	=	gcc	-Wall -Wextra -Werror

.c.o:
	$(GCC) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJECTS)
			ar rcs $(NAME) $(OBJECTS)

bonus:		$(NAME) $(BONUS.O)
			ar -rcs $(NAME) $(BONUS.O)

clean:		
			rm -f $(OBJECTS) $(BONUS.O)

fclean:		clean
			rm -f $(NAME)

re:			fclean $(NAME)

#.PHONY:	all clean fclean re