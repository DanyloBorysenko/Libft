HEADER = libft.h
GCC = gcc -Wall -Wextra -Werror -I.
NAME = libft.a
MY_SRC = $(wildcard *.c)
MY_OBJ = $(MY_SRC:.c=.o)
AR = ar
AR_FLAGS = rcs


%.o: %.c $(HEADER)
	$(GCC) -c -o $@ $<

$(NAME): $(MY_OBJ)
	$(AR) $(AR_FLAGS) $(NAME) $(MY_OBJ)

all: $(NAME)

clean:
	rm -f $(MY_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)