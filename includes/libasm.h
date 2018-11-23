#ifndef LIBASM_H
# define LIBASM_H 

#include <stddef.h>

int ft_isdigit(int val);
int ft_isascii(int val);
int ft_isalpha(int val);
int ft_isprint(int val);
int ft_isalnum(int val);

int ft_toupper(int val);
int ft_tolower(int val);

void ft_bzero(char *str, size_t n);

size_t  ft_strlen(char* str);
void    ft_puts(char *str);

char    *ft_strcpy(char *dst, char *src);
char    *ft_strcat(char *dst, char *src);

void    *ft_memset(void *b, int c, size_t len);
void    *ft_memcpy(void *dst, void *src, size_t len);

#endif