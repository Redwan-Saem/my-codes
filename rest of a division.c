#include <stdio.h>
int main(){
    int a,b,x,y,i;
    scanf("%d %d",&x,&y);
    a=x<y ? x:y;
    b=x>y ? x:y;
    for (i=a+1;i<b;i++){
        if((i%5==2) || (i%5==3))
            printf("%d\n",i);
    }
    return 0;
}
