# Variables
NAME = libft.a            
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c

OBJ = $(SRC:.c=.o)

# Cree la librairie
all: $(NAME)

# Compile fichiers sources en fichiers objets
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Compile les fichiers c en o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Supp fichiers objets
clean:
	rm -f $(OBJ)

# Supp fichiers objets + librairie
fclean: clean
	rm -f $(NAME)

# Supp tout et recompile
re: fclean all