// Exercise 1 : Functions

// Write a function getMaximum that takes three integers as arguments and returns largest one

#include <stdio.h>

int getMaximum(int a, int b, int c) {
    int max ;
        if (a > b && a > c) {
            max = a;
        }else if (b > a && b > c){
            max = b;
        }else { 
            max = c; 
        }
        return max;
        
}

int main () {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int max = getMaximum(a, b, c);
    printf("The maximum number is %d", max);
    
    return 0;
}

// Exercise 2 : Functions

// Write a function getMinimum that takes three integers as arguments and returns smallest one

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