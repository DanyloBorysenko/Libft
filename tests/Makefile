CC = cc
CFLAGS = -Wall -Wextra -Werror -I..
LFLAGS = -L.. -lft -lbsd
RM = rm -f
MY_SRC = isalnum_test.c \
      isalpha_test.c \
	  isascii_test.c \
	  isdigit_test.c \
	  isprint_test.c \
	  tolower_test.c \
	  toupper_test.c \
	  strlen_test.c  \
	  atoi_test.c    \
	  strlcpy_test.c \
	  strlcat_test.c \
	  memset_test.c  \
	  bzero_test.c   \
	  memcpy_test.c  \
	  memmove_test.c \
	  memchr_test.c  \
	  memcmp_test.c  \
	  strncmp_test.c \
	  strchr_test.c  \
	  strrchr_test.c \
	  strnstr_test.c \
	  strdup_test.c  \
	  calloc_test.c  \
	  substr_test.c  \
	  strjoin_test.c \
	  strtrim_test.c \
	  split_test.c   \
	  itoa_test.c    \
	  strmapi_test.c \
	  striteri_test.c \
	  putchar_fd_test.c \
	  putstr_fd_test.c \
	  putendl_fd_test.c \
	  putnbr_fd_test.c 

BONUS_SRC = lstnew_bonus_test.c \
	  lstadd_front_bonus_test.c \
	  lstsize_bonus_test.c \
	  lstlast_bonus_test.c \
	  lstadd_back_bonus_test.c \
	  lstdelone_bonus_test.c \
	  lstclear_bonus_test.c \
	  lstiter_bonus_test.c  \
	  lstmap_bonus_test.c

MY_OBJ = $(MY_SRC:.c=)
MY_BONUS_OBJ = $(BONUS_SRC:.c=)

all: $(MY_OBJ)

%: %.c
	$(CC) $(CFLAGS) $< -o $@ $(LFLAGS)

bonus: all $(MY_BONUS_OBJ) 

clean:
	$(RM) $(MY_OBJ) $(MY_BONUS_OBJ)