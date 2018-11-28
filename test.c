#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int ft_memcmp(void*s1,void*s2,size_t n);
int ft_strcmp(char*s1,char*s2);

int main()
{
    char* str1 = "0123";
    char* str2 = "";
    char* str3 = "0123014";

    printf("%s, %s, %d\n",str1,str2,strcmp(str1,str2));
    printf("%s, %s, %d\n",str1,str1,strcmp(str1,str1));
    printf("%s, %s, %d\n",str1,str3,strcmp(str1,str3));
    printf("%s, %s, %d\n",str2,str3,strcmp(str2,str3));
    printf("%s, %s, %d\n",str2,str2,strcmp(str2,str2));
    return (0);
 }
