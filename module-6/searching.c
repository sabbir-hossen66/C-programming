#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x); 

    int found = 0;  
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            printf("%d\n", i);
            found = 1;
            break;  
        }
    }

    if (!found) {
        printf("-1\n");
    }

    return 0;
}
