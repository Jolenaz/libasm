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
#endif