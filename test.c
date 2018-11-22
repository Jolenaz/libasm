#include <stdio.h>
#include <stdlib.h>

void ft_bzero(void *ptr, size_t n);

int main()
{
    char *j = malloc(15);
    int i = 0;
    while (i < 14)
    {
        j[i] = '0' + i;
        i++;
    }
    j[15] = 0;
    ft_bzero(j, 5);
    puts(j + 4);
    puts(j + 5);
    puts(j + 6);
    return (0);
}