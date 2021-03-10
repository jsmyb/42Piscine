# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoghomo <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/12 21:53:05 by lsoghomo          #+#    #+#              #
#    Updated: 2020/11/12 21:53:07 by lsoghomo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
gcc -c ft_putchar.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c
gcc -c ft_swap.c
ar rc libft.a ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o ft_swap.o
ranlib libft.a
rm *.o
