
// #include<stdio.h>
// int main()
// { 
//     char a;
//    scanf("%c",&a);
//     printf("%c", a);
//     return 0;
// }

//Write a C program that takes n integers as input and finds the second largest number among them.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first, second;
    first = second = -2147483648; // Minimum possible int value

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }

    if (second == -2147483648)
        printf("There is no second largest number.\n");
    else
        printf("The second largest number is %d\n", second);

    return 0;
}
