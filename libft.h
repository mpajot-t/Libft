#ifndef LIBFT
#define LIBFT

#include <stdlib.h>
int	ft_isalnum(char c);
int	ft_isalpha(char c);
char	ft_isascii(char c);
char	ft_isdigit(char c);
char	ft_isprint(char c);
size_t	ft_strlen(const char *c);
void	*ft_memset (void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*strchr(const char *s, int c);
char	*strrchr(const char *s, int c);
#endif