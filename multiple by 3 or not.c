#include <stdio.h>
int main (){
    int n;
    printf("enter a value:");
    scanf("%d",&n);
    switch (n%3){
    case 0:printf("yes");
    break;
    default:printf("no");
    break;
    }
}
