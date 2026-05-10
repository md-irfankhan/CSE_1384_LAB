#include <stdio.h>
void input(int a[]){
    int i;
    for(i=0;i<10;i++){
        printf("Enter value for [%d]:",i);
        scanf("%d",&a[i]);
    }
}
void display(int a[]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int arr[10];
    printf("Input for Array:\n");
    input(arr);
    printf("Array:");
    display(arr);

}
