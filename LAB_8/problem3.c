#include <stdio.h>
int main(){
    int arr[]={1,2,3,5,6,8,9,11,12,15};
    int l,r,target,size,mid;
    size=sizeof(arr)/sizeof(arr[0]);
    l=0;
    r= size-1;
    printf("Enter your target value:");
    scanf("%d",&target);
    while(l<=r){
        mid=(l+r)/2;
        if(target==arr[mid]){
            printf("Value fount at index %d",mid);
            break;
        }
        else if(target<arr[mid]){
            r=mid-1;
        }
        else if(target>arr[mid]){
            l=mid+1;
        }

    }
    if(l>r){
        printf("Value not found");
    }
    
}