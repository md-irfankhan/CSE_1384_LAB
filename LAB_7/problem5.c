#include <stdio.h>
int digitSum(int num){
    int sum=0,ld;
    while(num!=0){
        ld=num%10;
        num=num/10;
        sum=sum+ld;
    }
    return sum;



}
int main(){
    int num,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    sum=digitSum(num);
    printf("%d",sum);


}

