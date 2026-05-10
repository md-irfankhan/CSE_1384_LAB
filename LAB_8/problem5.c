#include <stdio.h>
int main(){
    int arr[]={12,17,2,7,3,5,6,11,9,1,4,5};
    int size,i,j,temp;
    size=sizeof(arr)/sizeof(arr[0]);
    for(i=1;i<size;i++){
        for(j=0;j<size-i;j++){
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
