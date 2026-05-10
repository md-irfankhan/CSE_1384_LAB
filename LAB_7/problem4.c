#include <stdio.h>
int isPalindrome(int num){
    int temp=num,ld,rev=0;
    while(num!=0){
        ld=num%10;
        num=num/10;
        rev=rev*10+ld;
    }
    if(temp==rev){
        return 1;
    }
    else{
        return 0;
    }


}
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    (isPalindrome(num)==1)?printf("Palindrome"):printf("Not Palindrome");




}


