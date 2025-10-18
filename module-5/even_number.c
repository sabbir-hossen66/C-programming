#include<stdio.h>

int main(){
 
    int n;
   
    scanf("%d",&n);
    int has_even = 0;
    for(int i=1; i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
            has_even = 1;
        }
      
    }
    if(!has_even){
        printf("-1");
    }
    return 0;
}