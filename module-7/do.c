#include <stdio.h>
#include <string.h>

int main() {
    int q;
    scanf("%d", &q);  

    while (q--) {
        int n;
        char s[25], t[25];
        scanf("%d", &n);
        scanf("%s %s", s, t);

        int freq[26] = {0};  

      
        for (int i = 0; i < n; i++) {
            freq[s[i] - 'a']++;
        }

     
        for (int i = 0; i < n; i++) {
            freq[t[i] - 'a']--;
        }

        
        int same = 1;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                same = 0;
                break;
            }
        }

        if (same)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
