#include <stdio.h>

int getMinimum (int a, int b, int c) {
    int min;
    if( a < b && a < c) {
        min = a;
    }else if (b < a && b < c) {
        min = b;
    }else {
        min = c;
    }
    return min;
}

int main() {
    int min;
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    min = getMinimum(a, b, c);
    printf("The minimum number is %d", min);
    return 0;
}