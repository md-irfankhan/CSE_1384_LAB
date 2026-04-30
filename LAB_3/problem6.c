#include <stdio.h>
int main(){
    int temp;
    printf("Enter temperature:");
    scanf("%d",&temp);
    if(temp==0){
        printf("Freezing weather");
    }
    else if(temp>0 && temp<=10){
        printf("very cold weather");
    }
    else if(temp>=11 && temp<=20){
        printf("cold weather");
    }
    else if(temp>=21 && temp<=30){
        printf("Normal in Temp");
    }
    else if(temp>=31 && temp<40){
        printf("it's hot");
    }
    else if(temp==40){
        printf("It's very hot");
    }
    return 0;
}