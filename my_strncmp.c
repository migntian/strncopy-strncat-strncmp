#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strncmp(const char *str1,const char *str2,int n)
{
    while(*str1 == *str2)
    {
        if(*str1 == '\0')
        {
            return 0;
        }
        *str1++;
        *str2++;
    }
    if(*str1 > *str2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char *p = "abcd";
    char *q = "abce";
    int ret = my_strncmp(p,q,4);
    printf("%d\n",ret);
    return;
}

