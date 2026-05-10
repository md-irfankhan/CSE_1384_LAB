#include <stdio.h>
int isPrime(int num){
    int i,prime=1;
    for(i=2;i<=num/2;i++){
        if(num%i==0){
            prime=0;
        }
    }
    return prime;
}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    (isPrime(num))?printf("Prime"):printf("Not Prime");
}



