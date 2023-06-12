#include <stdio.h>

int getNumber(int low, int high) {
    int range = high - low + 1;
    int number = low + (range/2);
    return number;
}

int main() {
    int low, high;
    printf("Enter two integers: ");
    scanf("%d %d", &low, &high);
    int number = getNumber(low, high);
    printf("Number: %d\n", number);
    return 0;
}