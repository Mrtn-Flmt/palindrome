##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile for printf
##

LP = 	lib/my/

MY = 	src/

LS = 	my_ls/

PO = 	pool/

BSQ = 	bsq/

PT = 	my_printf/

SRC =	./$(MY)main.c								\
		./$(MY)requirement.c						\
		./$(MY)print_info.c								\
													\
		./$(LP)$(PT)my_printf.c						\
		./$(LP)$(PT)my_printf_char.c				\
		./$(LP)$(PT)my_printf_str.c					\
		./$(LP)$(PT)my_printf_nbr.c					\
		./$(LP)$(PT)my_printf_bin.c					\
		./$(LP)$(PT)my_printf_oct.c					\
		./$(LP)$(PT)my_printf_hex.c					\
													\
		./$(LP)$(PO)my_compute_power_rec.c			\
		./$(LP)$(PO)my_putchar.c 					\
		./$(LP)$(PO)my_put_nbr.c					\
		./$(LP)$(PO)my_putstr.c						\
		./$(LP)$(PO)my_strlen.c 					\
		./$(LP)$(PO)my_isneg.c						\
		./$(LP)$(PO)my_atoi.c						\
		./$(LP)$(PO)my_intcpy.c						\
		./$(LP)$(PO)my_swap.c						\
		./$(LP)$(PO)my_revstr.c						\
		./$(LP)$(PO)my_strcpy.c						\
		./$(LP)$(PO)my_strncpy.c					\
		./$(LP)$(PO)my_error.c						\
		./$(LP)$(PO)my_perror.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include -lncurses

NAME = palindrome

all:	$(NAME)

$(NAME): $(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f clean $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all clean