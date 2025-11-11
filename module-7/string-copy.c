#include<stdio.h>
#include<string.h>


int main(){
   int a[100],b[100];
   scanf("%s %s",&a,&b);
   int length = strlen(b);
    for (int i = 0; i <= length; i++)
    {
        a[i]=b[i];
    }
    printf("%s %s",a,b);
    
   
    return 0;
}