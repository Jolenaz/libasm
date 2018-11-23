#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_puts(char *ptr);
char    *ft_strcpy(char *dst, char *src);
char    *ft_strcat(char *dst, char *src);
void    *ft_memset(void *b, int c, size_t len);


int main()
{
    char *src = "Bonjour monde ";
    char *src2 = "\n";
    char *dst_ft = malloc(1000);
    char *dst = malloc(1000);

    ft_strcpy(dst_ft, src);
    ft_strcat(dst_ft, src2);
    strcpy(dst, src);
    strcat(dst, src2);
    if (dst_ft != ft_memset((void*)dst_ft, 'i', 4))
        return(0);

    if (strcmp(dst_ft, memset(dst, 'i', 4) ))
        return (0);

    ft_puts(dst_ft);

    return (0);
}