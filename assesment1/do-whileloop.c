// #include<stdio.h>

// int main() {
//     int n;
//     int i = 1; // Initialize i
//     int sum = 0;

//     printf("Enter your choice: ");
//     scanf("%d", &n);

//     // Calculate sum of even numbers from 1 to n
//     while(i <= n) {
//         if(i % 2 == 0) {
//             sum += i;
//         }
//         i++;
//     }

//     printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);

//     return 0;
// }
#include<stdio.h>

int main() {
    int n;
    int i = 1; // Start from 1
    int sum = 0;

    printf("Enter your choice: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Invalid input. Please enter a positive number.\n");
        return 0;
    }

    do {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    } while(i <= n);

    printf("Sum of even numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
