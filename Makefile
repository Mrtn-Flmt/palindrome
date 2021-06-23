##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Compilation Makefile
##

LP = 	lib/my/
MY = 	src/
PO = 	pool/
PT = 	my_printf/

SRC =	./requirement.c \
		./$(MY)main.c \
		./$(MY)print_info.c \
		./$(MY)struct.c \
		./$(MY)math.c \
		./$(MY)check.c \
		./$(MY)check_ac.c \
		./$(MY)check_pal.c \
		./$(MY)check_imin.c \
		./$(LP)$(PT)my_printf.c \
		./$(LP)$(PT)my_printf_char.c \
		./$(LP)$(PT)my_printf_str.c \
		./$(LP)$(PT)my_printf_nbr.c \
		./$(LP)$(PT)my_printf_bin.c \
		./$(LP)$(PT)my_printf_oct.c \
		./$(LP)$(PT)my_printf_hex.c \
		./$(LP)$(PO)my_compute_power_rec.c \
		./$(LP)$(PO)my_putchar.c \
		./$(LP)$(PO)my_put_nbr.c \
		./$(LP)$(PO)my_putstr.c \
		./$(LP)$(PO)my_strlen.c \
		./$(LP)$(PO)my_isneg.c \
		./$(LP)$(PO)my_atoi.c \
		./$(LP)$(PO)my_intcpy.c	\
		./$(LP)$(PO)my_swap.c \
		./$(LP)$(PO)my_revstr.c \
		./$(LP)$(PO)my_strcpy.c \
		./$(LP)$(PO)my_strncpy.c \
		./$(LP)$(PO)my_error.c \
		./$(LP)$(PO)my_perror.c

OBJ = $(SRC:.c=.o)

CFLAGS += -Wall -I./include

NAME = palindrome

all:	$(NAME)

$(NAME): $(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	rm -f clean $(OBJ)

fclean: clean
	rm -f $(NAME)

re: clean fclean all