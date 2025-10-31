#include<stdio.h>
int main(){
    long long int n;
    scanf("%lld", &n);
    long long int count = 0;
    while(n > 0){
        n = n / 10;
        count++;
    }
    printf("%lld\n", count);
    return 0;
}