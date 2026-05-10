#include <stdio.h>
#include <math.h>
int revNum(int num){
    int rev=0,ld;
    while(num!=0){
        ld=num%10;
        num=num/10;
        rev=rev*10+ld;
    }
    return rev;

}
int main(){
    int n;
    printf("Enter Number:");
    scanf("%d",&n);
    if(pow(revNum(n),2)==revNum(pow(n,2))){
        printf("Adam");
    }
    else{
        printf("Not Adam");
    }
}
