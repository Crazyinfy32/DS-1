#include <stdio.h>

int main() {
    int a=0;
    int b=0;
    scanf("%d %d",&a,&b);
    int min=a>b?a:b;
    while(1)
    {
        if(min%a==0&&min%b==0)
        {
            printf("%d",min);
            break;
        }
        min++;
    }
    return 0;
}
