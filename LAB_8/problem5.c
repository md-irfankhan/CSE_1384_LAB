#include <stdio.h>
int main(){
    int arr[]={7,1,8,11,2,13,15,6,5,3};
    int size,i,j,temp;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size-1;i++){
        for(j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }


}
