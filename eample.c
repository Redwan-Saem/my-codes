#include <stdio.h>
//Count occurences in the array {1,2,3,1,1,4}
int main() {
    int a[6]={1,2,3,1,1,4};
    int k,w=0,x=0;
    for(k=0;k<6;k++){
        if (a[k]==1)
        {
            w++;
        }
        else if(a[k]==6){
            x++;
        }

    }
    printf("1 occurs %d times\n6 occurs %d times",w,x);
    return 0;
}

