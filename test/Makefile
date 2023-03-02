# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 03:39:22 by eryudi-m          #+#    #+#              #
#    Updated: 2023/03/02 05:52:08 by eryudi-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Settings to have unity test ready
#http://www.throwtheswitch.org/build/make
#https://github.com/ThrowTheSwitch/Unity


CLEANUP = rm -f
MKDIR = mkdir -p

PATHU1 = unity/
PATHU = unity/src/
PATHS = ../src/
PATHI = ../inc/
PATHA = ../app/
PATHT = ../test/
PATHB = build/
PATHD = build/depends/
PATHO = build/objs/
PATHR = build/results/

#Files

#Source files
SRCT = $(wildcard $(PATHT)*.c)
OBJ = $(wildcard $(PATHS)*.o)

COMPILE=gcc -c
LINK=gcc
DEPEND=gcc -MM -MG -MF
CFLAGS=-I. -I$(PATHU) -I$(PATHS) -I$(PATHI) -DTEST

test:
	clang -g -Wall -Wextra -Werror ../obj/push_swap.o ../obj/input_handler.o ../obj/stack_add.o ../obj/stack_aux.o ../obj/stack_remove.o ../obj/operation_swap.o test_operation_swap.c test.c ./unity/src/unity.c ../libft/push_swap -I../inc/ -I./unity/src/ -o ./test.out

.PHONY: clean
.PHONY: test
	