#include <stdio.h>
float areaTringle(int base,int height){
    return 0.5*base*height;

}
int main(){
    int h,b;
    printf("Enter height,base respectively:");
    scanf("%d %d",&h,&b);
    float areaT=areaTringle(h,b);
    printf("%.2f",areaT);


}
