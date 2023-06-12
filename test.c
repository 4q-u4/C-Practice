#include <stdio.h>

int isArmstrong(int n) {
    int sum = 0;
    int temp = n;

    while (temp > 0) {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }

    if (sum == n) {
        return 1;
    }

    return 0;
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isArmstrong(n)) {
        printf("%d is an Armstrong number.", n);
        return 1;  // indicating the number is an Armstrong number
    } else {
       printf("%d is not an Armstrong number.", n);
        return 0;  // indicating the number is not an Armstrong number
    }
    return 0;
}