#include <stdio.h>
int main(){
    int n,idx=-1,target;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search for:\n");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            idx=i;
            break;
        }
    }
    if (idx!=-1){
        printf("element %d found at index %d",target,idx);
    }
    return 0;
}
