#include <stdio.h>
#include <string.h>

int main() {
    int n;        
    scanf("%d", &n);
    
    int x = 0;    
    char s[5];       

    for (int i = 0; i < n; i++) {
        scanf("%s", s);     
        
       
        if (strstr(s, "++")) {
            x++;
        }
        
        else if (strstr(s, "--")) {
            x--;
        }
    }

    printf("%d\n", x);   
    return 0;
}
