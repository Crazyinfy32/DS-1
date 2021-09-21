#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int my_strlen(const char *str)
{
    if(str=='\0')
        return 0;
    int count=0;
    while(*str!='\0')
    {
        count++;
        str++;
    }
    return count;
}
int main() {
    char arr[]="abcdef";
    printf("%d",my_strlen(arr));
    return 0;
}
