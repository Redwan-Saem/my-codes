#include <stdio.h>

    int binarySearchRecursive(int arr[],int target,int left,int right){
        if(left>right){
            return -1;
        }
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }else if(arr[mid]<target){
            return binarySearchRecursive(arr,target,mid+1,right);
        }else{
        return binarySearchRecursive(arr,target,left,mid-1);
        }
    }
    int main(){
        int n,target;
        printf("enter the element number:");
        scanf("%d",&n);
        int arr[n];
        printf("enter elements:\n");
        for (int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("Enter the element to search:");
        scanf("%d",&target);
        int result=binarySearchRecursive(arr,target,0,n-1);
        if(result!=-1){
            printf("%d found at index %d",target,result);
        }


}
