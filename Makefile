NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
HEADER = libft.h
AR = ar
ARFLAGS = rcs
RM = rm -f
SRC = ft_isalnum.c \
      ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_tolower.c \
	  ft_toupper.c \
	  ft_strlen.c  \
	  ft_atoi.c    \
	  ft_strlcpy.c \
	  ft_strlcat.c \
	  ft_memset.c  \
	  ft_bzero.c   \
	  ft_memcpy.c  \
	  ft_memmove.c \
	  ft_memchr.c  \
	  ft_memcmp.c  \
	  ft_strncmp.c \
	  ft_strchr.c  \
	  ft_strrchr.c \
	  ft_strnstr.c \
	  ft_strdup.c  \
	  ft_calloc.c  \
	  ft_substr.c  \
	  ft_strjoin.c \
	  ft_strtrim.c \
	  ft_split.c   \
	  ft_itoa.c    \
	  ft_strmapi.c \
	  ft_striteri.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(ARFLAGS) $(NAME) $(OBJ)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all