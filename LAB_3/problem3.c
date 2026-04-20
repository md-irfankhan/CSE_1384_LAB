#include <stdio.h>
int main(){
    int weekN;
    printf("Enter week No.");
    scanf("%d",&weekN);
    if(weekN==1){
        printf("Saturday");
    }
    else if(weekN==2){
        printf("Sunday");
    }
    else if(weekN==3){
        printf("Monday");
    }
    else if(weekN==4){
        printf("Tuesday");
    }
    else if(weekN==5){
        printf("Wednesday");
    }
    else if(weekN==6){
        printf("Thrusday");
    }
    else if(weekN==7){
        printf("Friday");
    }
    else{
        printf("Invalid Input");
    }

}
