#!/bin/bash

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    test.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eryudi-m <eryudi-m@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 07:57:10 by eryudi-m          #+#    #+#              #
#    Updated: 2023/02/28 08:00:03 by eryudi-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

bin_file=../bin/push_swap

# Colors
RED=$'\e[31m'
NC=$'\e[0m'
YELLOW=$'\e[33m'
BLUE=$'\e[34m'
GREEN=$'\e[32m'


# Test
echo "${BLUE}Test 1: ${NC}"
echo "${YELLOW}Input: ${NC}"
echo "1 2 3 4 5"
echo "${YELLOW}Output: ${NC}"
echo "1 2 3 4 5" | $bin_file
echo "${GREEN}OK${NC}"
