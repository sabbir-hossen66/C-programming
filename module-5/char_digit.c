//Given a letter X. Determine whether X is Digit or Alphabet and if it is Alphabet determine if it is Capital Case or Small Case.
#include<stdio.h>
int main(){

     char ch;
     scanf("%c",&ch);
     if(ch>='0' && ch<='9'){
        printf("IS DIGIT");
     }
     else{
        printf("ALPHA\n");
        if(ch>='a' && ch<='z'){
            char newCh=ch-32;
            printf("IS SMALL");
        }
        else{
            char newCh=ch+32;
            printf("IS CAPITAL");
        }
     }
    return 0;
}