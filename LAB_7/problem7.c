#include <stdio.h>
int fact(int num){
    int i,fact=1;
    for(i=2;i<=num;i++){
        fact=fact*i;
    }
    return fact;
}
int isStrong(int num){
  int ld,sum=0,temp;
  temp=num;
  while(num!=0){
    ld=num%10;
    num=num/10;
    sum=sum+fact(ld);
  }
  if(sum==temp){
    return 1;
  }
  else{
    return 0;
  }

}
int main(){
    int num;
    printf("Enter Number :");
    scanf("%d",&num);
    if (isStrong(num)==1){
        printf("Strong Number");
    }
    else{
        printf("Not a strong number");
    }

}
