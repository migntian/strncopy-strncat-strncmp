#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mystrncopy(char *dest,const char *src,int n)
{
    char *ret = dest;
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
    char *arr = "abcde";
    char arr1[6];
    printf("%s\n",mystrncopy(arr1,arr,3));
    return;
}
