CC = cc
CFLAGS = -Wall -Wextra -Werror -I..
LFLAGS = -L.. -lft -lbsd
RM = rm -f
MY_SRC = $(wildcard *.c)
MY_OBJ = $(MY_SRC:.c=)

all: $(MY_OBJ)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)

clean:
	$(RM) $(MY_OBJ)