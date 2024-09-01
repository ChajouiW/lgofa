CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_putnbr_fd.c ft_putnbr.c ft_atoi.c    ft_isalnum.c  ft_isdigit.c  ft_memchr.c  ft_memmove.c  ft_putchar_fd.c  ft_strchr.c   ft_strlcpy.c  ft_strnstr.c  ft_tolower.c ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcmp.c  ft_memset.c   ft_putstr.c      ft_strdup.c   ft_strlen.c   ft_strrchr.c  ft_toupper.c ft_calloc.c  ft_isascii.c  ft_memccpy.c  ft_memcpy.c  ft_putchar.c  ft_putstr_fd.c   ft_strlcat.c  ft_strncmp.c  ft_substr.c
OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
