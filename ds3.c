#include <stdio.h>

int main() {
    int a=0;
    int n=0;
    scanf("%d %d",&a,&n);
    int i=0;
    int ret=0;
    int sum=0;
    for(i=0;i<n;i++)
    {
        ret=ret*10+2;
        sum=sum+ret;
    }
    printf("%d",sum);
    return 0;
}
