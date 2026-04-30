#include <stdio.h>
int main(){
    int num,rev=0,ld,temp;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        ld=num%10;
        num=num/10;
        rev=rev*10+ld;
    }
    // printf("%d",rev);
    (temp==rev)?printf("Palindrome"):printf("Not a Palindrome");
}