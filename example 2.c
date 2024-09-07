#include <stdio.h>
int main(){
    int a[]={4,9,7,6,5,8,3,2,1,5};
    int count=0,i;
    int to_find=8;
    for (i=0;i<10;i++){
        if (a[i]==to_find)
        {
            count++;
        }
    }
    printf("8 is found%d\n",count);
    return 0;
}
