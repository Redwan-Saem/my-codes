#include <stdio.h>
int main() {
    int max,a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
        max=a;
    else max=b;
    if (c>max)
        max=c;
    printf("maximum value:%d\n",max);
}
