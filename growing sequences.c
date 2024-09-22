#include <stdio.h>
int main() {
    int i,a;
    do{
            scanf("%d",&a);
    if (a>0){
        for(i=1;i<a;i++)
            printf("%d ",i);
        printf("%d\n",a);
    }
    }
    while (a!=0);
    return 0;
}
