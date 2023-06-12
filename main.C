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

// Exercise 3 : Fucntions
// Write a function getAverage that takes three integers as arguments and returns average

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

// Exercise 4 : Functions
// Using above functions , write program that reads 3 positive ints from the user and diplay max , min , avg

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

// Exercise 5 : Functions 

//Write a function int getNumber (int low, int high) that takes 2 ints as arguments (low and high) 
// and reads and returns number from keyboard where this number is between low and high

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