#include<stdio.h>

int main() {
    int n;
    float avg, sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    float num[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%f", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average is: %f\n", avg);

    return 0;
}
