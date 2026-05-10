#include <stdio.h>
int main(){
    int arr[]={7,1,8,11,2,13,15,6,5,3};
    int size,max,i;
    size=sizeof(arr)/sizeof(arr[0]);
    max=arr[0];
    for(i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("Maximum value is: %d",max);

}