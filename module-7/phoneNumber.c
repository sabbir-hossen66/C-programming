#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);      
    char s[105];
    scanf("%s", s);      
    
    int count8 = 0;       
    
   
    for (int i = 0; i < n; i++) {
        if (s[i] == '8') {
            count8++;
        }
    }

  
    int possible = n / 11;  
    
   
    int result = count8 < possible ? count8 : possible;

    printf("%d\n", result);

    return 0;
}
