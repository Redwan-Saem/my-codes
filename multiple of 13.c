#include <stdio.h>
int main(){
    int a,b,x,y,i;
    scanf("%d %d",&x,&y);
    int sum=0;
    a=x<y ? x:y;
    b=x>y ? x:y;
    for(i=a;i<=b;i++){
            if(i%13!=0){
                sum+=i;
            }
    }
    printf("%d\n",sum);
    return 0;
}
