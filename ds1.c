#include <stdio.h>
int Numberof1(int ret)
{
    int count=0;
    int i=0;
    while(ret)
    {
        ret=ret&(ret-1);
        count++;
    }
    return count;
}
int main() {
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int ret=m^n;
    printf("%d",Numberof1(ret));
    return 0;
}
