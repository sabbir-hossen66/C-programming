#include<stdio.h>
int main(){
  long long int n,m,a;
    scanf("%lld %lld %lld", &n,&m,&a);
    long long int row= (n+a-1)/a;
    long long int col= (m+a-1)/a;
    long long int area=row*col;
    printf("%lld\n", area);

    return 0;
}