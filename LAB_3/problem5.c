#include <stdio.h>
int main(){
    int math,phy,chem,total,mp;
    printf("Enter marks of Math, Physics , Chemistry respectfully:");
    scanf("%d %d %d",&math,&phy,&chem);
    total=math+phy+chem;
    mp=math+phy;
    if(math >=65 && phy >=55 && chem >=50){
        if(total>=180 && mp>=140){
            printf("Eligible for admission");
        }
        else{
            printf("Not Eligible");
        }
    }
    else{
        printf("Not eligible");
    }
}
