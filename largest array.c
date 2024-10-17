#include <stdio.h>
int main(){
    int i,n,max;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements: ");
    for (i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (i=0;i<n;i++){
        if(max<arr[i]){
                max=arr[i];
        }
    }
    printf("largest array:%d\n",max);
    return 0;

}
