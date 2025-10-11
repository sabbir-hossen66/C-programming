//Take a number from user and check if its a positive or negative number.
#include<stdio.h>
int main(){
   int num;
   scanf("%d",&num);
   if(num > 0){
    printf("%d is a positive number",num);
   }
      else if(num < 0){
       printf("%d  is a negative number", num);
   }
   else{
    printf("%d is a negative",num);
   }
    return 0;
}