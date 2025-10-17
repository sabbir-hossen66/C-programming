//Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter. Otherwise print the letter after converting it from uppercase letter to lowercase letter
#include<stdio.h>
int main(){
  char ch;
  scanf("%c",&ch);
  if(ch>='a' && ch<='z'){
   char newCh=ch-32; // convert to capital
    printf("%c",newCh);
  }
  else{
    char newCh=ch+32; //convert to small
    printf("%c",newCh);
  }
    return 0;
}