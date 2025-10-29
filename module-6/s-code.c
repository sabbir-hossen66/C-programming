#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int A, B;
    char S[25]; 

    scanf("%d %d", &A, &B);
    scanf("%s", S);

    int len = strlen(S);

  
    if (len != A + B + 1) {
        printf("No");
        return 0;
    }


    if (S[A] != '-') {
        printf("No");
        return 0;
    }


    for (int i = 0; i < len; i++) {
        if (i == A) continue; 
        if (!isdigit(S[i])) {
            printf("No");
            return 0;
        }
    }

    printf("Yes");
    return 0;
}
