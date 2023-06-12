#include <stdio.h>

int getAverage (int a, int b, int c) {
    int average;
    int sum = a + b + c;
    average = sum/3;
    return average;
}

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

int main() {

    int a, b, c;
    int max, min, average;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a < 0 || b < 0 || c < 0){
        printf("Enter POSITIVE INTS!");
        return 0;
    }
    max = getMaximum(a, b, c);
    min = getMinimum(a, b, c);
    average = getAverage(a, b, c);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %d\n", average);
    
return 0;
}