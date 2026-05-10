#include <stdio.h>
int main(){
    int arr[]={10,15,2,8,7,2,10,15,11,13};
    int i,target,size,f=0;
    size=sizeof(arr)/sizeof(arr[0]);
    printf("Enter your target value:");
    scanf("%d",&target);
    for(i=0;i<size;i++){
        if(arr[i]==target){
            printf("Value found at index %d\n",i);
            f++;
        }
    }
    if(f>0){
        printf("Frequency is %d",f);
    }
    else{
        printf("Value not found");
    }
}