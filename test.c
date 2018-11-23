#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    ft_puts(char *ptr);
void    *ft_memcpy(void* dst, void *srd, size_t len);

typedef struct s_list{
    int i;
    float   k;
    char    *str;

}               t_list;

int main()
{
    t_list src;
    src.i = 145;
    src.k = 0.45641f;
    src.str = "fghyjuikolp523457";
    size_t len = sizeof(t_list);
    void *dst_ft = malloc(len);
    void *dst = malloc(len);

    if (dst_ft != ft_memcpy(dst_ft, (void*)&src, len))
        ft_puts("error return value\n");
    memcpy(dst, (void*)&src, len);

    if (memcmp(dst_ft, dst, len))
        ft_puts("error in value\n");

    return (0);
}