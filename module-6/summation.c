#include<stdio.h>
#include<stdlib.h>

int main(){
    long long int n;
    scanf("%lld", &n);

    long long int arr[n];
    long long int sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
        sum += arr[i];
    }

    printf("%lld", llabs(sum)); 
    return 0;
}
