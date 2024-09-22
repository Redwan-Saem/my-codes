#include <stdio.h>
int main (){
    int i,N,fact=1;
    scanf("%d",&N);
    if(N>1 && N<13){
        for (i=1;i<=N;i++)
            fact=fact*i;
    }
    printf("%d\n",fact);
    return 0;
}
