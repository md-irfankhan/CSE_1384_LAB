/*Write a C program to find out whether a number is buzz or not. A buzz number either
ends with a 7 or is divisible by 7.*/
#include <stdio.h>
int main(){
    int num;
    printf("Enter your number:");
    scanf("%d",&num);
    (num%10==7 || num%7==0)?printf("Buzz number."):
        printf("Not a buzz number.");
    return 0;
}
