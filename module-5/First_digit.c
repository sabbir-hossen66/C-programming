// #include<stdio.h>
// int main(){
//     int x;
//    scanf("%d",&x);
//    int firstDigit = x/1000;
// if( firstDigit%2==0){
    
//     printf("EVEN");
//    }
//    else{
//     printf("ODD");
//    }
//     return 0;
// }


#include<stdio.h>
int main(){
    int x;
    scanf("%d",&x);

    int second_last = (x / 1000) % 10;  // শেষ digit বাদ দিয়ে, তার পরের digit বের করি

    printf("%d", second_last);
    return 0;
}