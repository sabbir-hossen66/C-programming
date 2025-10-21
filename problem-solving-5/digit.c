#include<stdio.h>
int main (){
  int t;
  scanf("%d",&t);
  for (int i = 1; i <= t;  i++)
  {
     int n;
     scanf("%d",&n);
     do
     {
      int digit=n%10;
      printf("%d ",digit);
      n/=10;
     }while (n!=0);
     printf("\n");
     
  }
  
    return 0;
}