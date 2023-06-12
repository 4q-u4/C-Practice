#include <stdio.h>
int getAverage (int a, int b, int c) {
    int average;
    int sum = a + b + c;
    average = sum/3;
    return average;
}

int main() {
    int a, b, c;
    int average;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    average = getAverage(a, b, c);
    printf("The average is %d", average);
    return 0;
}