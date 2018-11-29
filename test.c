#include <stdio.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>

int main()
{
        int val0;
        int val1;

        char *str1 = "\200";
        char *str2 = "\0";

        val1 = memcmp(str1, str2, 2);
        val0 = memcmp("\200", "\0", 2);

        printf("val 1 : %d \n",val1);
        printf("val 0 : %d \n",val0);

    return (0);
 }
