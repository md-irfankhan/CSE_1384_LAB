#include <stdio.h>
int main(){
    int ch;
    printf("Enter your charecter:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){
        printf("%c is a uppercase alphabet",ch);
    }
    else if(ch>='a' && ch<='z' ){
        printf("%c is a lowercase alphabet",ch);
    }
    else{
        printf("Invalid Input.");
    }
    return 0;

}
