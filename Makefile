# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dmandric <dmandric@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/01/16 16:22:22 by dmandric          #+#    #+#              #
#    Updated: 2026/01/17 18:18:31 by dmandric         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# 1. Nome del file finale (La libreria)
NAME = libftprintf.a

# 2. Compilatore e Flag
CC = cc
CFLAGS = -Wall -Wextra -Werror

# 3. Lista dei tuoi file .c (AGGIUNGI QUI SE NE CREI ALTRI)
SRCS = ft_printf.c ft_print_text.c ft_print_nums.c ft_print_hex.c

# 4. Trasformiamo i .c in .o (Object files)
OBJS = $(SRCS:.c=.o)

# 5. Regola principale (quella che parte se scrivi "make")
all: $(NAME)

# 6. Come creare la libreria dai file oggetto
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# 7. Come compilare ogni singolo file .c in .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 8. Pulizia dei file temporanei (.o)
clean:
	rm -f $(OBJS)

# 9. Pulizia totale (rimuove anche la libreria)
fclean: clean
	rm -f $(NAME)

# 10. Ricompila tutto da zero
re: fclean all

# 11. Dice al make che questi nomi non sono file veri
.PHONY: all clean fclean re