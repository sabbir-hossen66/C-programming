#include <stdio.h>

int main() {
    int n, sum = 0;
    char digits[1000001];

    scanf("%d", &n);    
    scanf("%s", digits);  

    for (int i = 0; i < n; i++) {
        sum += digits[i] - '0'; 
    }

    printf("%d\n", sum);

    return 0;
}
