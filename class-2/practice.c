//Take a number from user and check if its a even number or odd number.
#include<stdio.h>
int main() {
    int num;

    printf("Enter numbers (press Ctrl+Z or Ctrl+D to stop):\n");

    // Keep taking numbers until user stops
    while (scanf("%d", &num) == 1) {
        if (num % 2 == 0) {
            printf("%d is an even number\n", num);
        } else {
            printf("%d is an odd number\n", num);
        }
    }

    return 0;
}



// int main() {
//     int num;

//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("%d is an even number.\n", num);   
//     } else {
//         printf("%d is an odd number.\n", num);
//     }

//     return 0;
// }
