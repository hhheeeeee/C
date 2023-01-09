# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seunghui <seunghui@student.42seoul.kr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/20 15:55:30 by seunghui          #+#    #+#              #
#    Updated: 2022/10/20 16:05:16 by seunghui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = ft_atoi.c ft_do_op.c ft_putnbr.c ft_putstr.c ft_strlen.c operator.c
OBJS = ${SRCS:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -f
all : ${NAME}
.c .o:
	${CC}| ${CFLAGS} -c $^ -o $@
${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
clean :
	${RM} ${OBJS}
fclean : clean
	${RM} ${NAME}
re : fclean all
