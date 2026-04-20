//Write a C program to find out whether someone is eligible to vote or not considering 18
//to be the minimum age to vote.
#include <stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    (age>=18)?printf("You can vote."):
        printf("You can't vote.");
    return 0;
}
