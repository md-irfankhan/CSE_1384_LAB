#include <stdio.h>
void input(int a[]){
    int i;
    for(i=0;i<5;i++){
        printf("Enter value for [%d]:",i);
        scanf("%d",&a[i]);
    }
}
void display(int a[]){
    int i;
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
void add(int a[],int b[],int c[]){
    int i;
    for(i=0;i<5;i++){
        c[i]=a[i]+b[i];
    }
}
int main(){
    int arr1[5],arr2[5],arr3[5];
    printf("Input for Array1:\n");
    input(arr1);
    printf("Input for Array2:\n");
    input(arr2);
    add(arr1,arr2,arr3);
    printf("Array1:");
    display(arr1);
    printf("\nArray1:");
    display(arr2);
    printf("\nArray3:");
    display(arr3);

}
