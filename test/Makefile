# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: codespace <codespace@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/20 03:39:22 by eryudi-m          #+#    #+#              #
#    Updated: 2023/03/19 01:10:16 by codespace        ###   ########.fr        #
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
PATHB = build/
PATHD = build/depends/
PATHR = build/results/

PATHO = ../obj/
PATHT = ./

#Files

#Source files
SRCT = $(wildcard $(PATHT)*.c)
OBJ = $(wildcard $(PATHO)*.o)

COMPILE=clang -g -Wall -Wextra -Werror
HEADERS = ./unity/src/unity.c ../libft/push_swap -I./unity/src/ -I../inc/
TESTS = ./*.c

#$(COMPILE) ../obj/push_swap.o ../obj/input_handler.o ../obj/stack_add.o ../obj/stack_aux.o ../obj/stack_remove.o ../obj/operation_swap.o test_operation_swap.c test.c ./unity/src/unity.c ../libft/push_swap -I../inc/ -I./unity/src/ -o ./test.out

test:
	cd .. && make
	$(COMPILE) $(OBJ) $(SRCT) $(HEADERS) -o ./test.out


.PHONY: clean
.PHONY: test
