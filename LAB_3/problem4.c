#include <stdio.h>
int main(){
    int ch;
    printf("Enter any charecter:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z' || ch>='a' && ch<='z'){

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonent");
        }

    }
    else{
        printf("Invalid Input.");
    }

    return 0;
}
