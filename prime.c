#include <stdio.h>
int main(){
    int n,i,count=0;
    printf("Enter a number:\n");
    scanf("%d",&n);
    for(i=2;i<n;i++){
            if(n%i==0){
                count++;
                break;
            }
            }
            if(count==0){
                printf("It's a Prime number\n");
            }
            else{
                printf("It's not a Prime number\n");
            }
            return 0;
}
