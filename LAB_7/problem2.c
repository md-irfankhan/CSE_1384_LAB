#include <stdio.h>
int fact(int num){
    int i,fact=1;
    for(i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int main(){
    int num,factorial;
    printf("Enter a number:");
    scanf("%d",&num);
    factorial=fact(num);
    printf("%d",factorial);
}

