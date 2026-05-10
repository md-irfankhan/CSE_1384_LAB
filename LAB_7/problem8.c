#include <stdio.h>
int isPrime(int num){
    int i,isPrime=1;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            isPrime=0;
        }
    }
    return isPrime;
}
void primeFact(int num){
    int i;
    for (i=2;i<=num/2;i++){
        if (num%i==0){
            if(isPrime(i)){
                printf("%d ",i);
            }
        }
    }

}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    primeFact(num);

}
