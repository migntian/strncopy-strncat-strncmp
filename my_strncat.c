#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strncat( char *dest,const char *src,int n)
{
    char *ret = dest;
    while(*dest != '\0')
    {
        *dest++;
    }
    while(n--)
    {
        *dest++ = *src++;
    }
    if(*dest != '\0')
    {
        *dest = '\0';
    }
    return ret;
}
int main()
{
    char *p = "abcd";
    char arr[10] = "efg";
    printf("%s\n",my_strncat(arr,p,3));
    return;
}
