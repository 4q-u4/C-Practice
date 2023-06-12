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

// Exercise 6 : Functions 

// Write a function isPrime that takes one int as argument and tells 1 if int is prime and 0 otherwise

#include <stdio.h>

int isPrime(int n){
    if ( n <= 1){
        return 0; // 1 or Less is not Prime
    }

    for(int i = 2; i*i <= n ; i++){
        if (n % i == 0){
            return 0; // number divisble by i , thus not prime
    }

    return 1; //number is prime
}

// Exercise 7 : Functions

// Write a fucntion isArmstrong that takaes an int as an argument and returns 1 if int is Armstrong, otherwise 0

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

// Exercisde 8 : Function + String
// Write Function to reverse string

#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Hello, World!";
    printf("Original string: %s\n", str);

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}

// Exercise 9 : Odd Even
 // Write a fucntion getNum that takes one integer as argument and returns if even or odd

 #include <stdio.h>

 int getNum(int N) {
    if (N % 2 == 0) {
        printf("%d is Even", N);
    }
  else {
    printf("%d is odd", N);
  }  
    }

    int main () {
        int N;
        printf("Enter a number: ");
        scanf("%d", &N);
        getNum(N);

        return 0;
    }


// Exercise 10 : Palindrome

// Write a function that takes a string as argument and returns true if the string is a palindrome

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool is_palindrome(const char* str) {
    int length = strlen(str);

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            return false;  // Characters don't match, not a palindrome
        }
    }

    return true;  // All characters matched, it is a palindrome
}

int main() {
    const char* palindrome1 = "racecar";
    const char* palindrome2 = "level";
    const char* non_palindrome = "hello";

    if (is_palindrome(palindrome1)) {
        printf("%s is a palindrome.\n", palindrome1);  // Output: racecar is a palindrome.
    } else {
        printf("%s is not a palindrome.\n", palindrome1);
    }

    return 0;
}

// exercise : max Value Array

#include <stdio.h>

int get_maximum_value(int arr[], int size) {
    if (size == 0) {
        return -1;  // Return -1 if the array is empty
    } else {
        int max_value = arr[0];  // Assume the first element is the maximum

        // Iterate through the array and update max_value if a larger value is found
        for (int i = 1; i < size; i++) {
            if (arr[i] > max_value) {
                max_value = arr[i];
            }
        }

        return max_value;
    }
}


// exercise : min value Array

int get_minimum_value(int arr[], int size) {
    if (size == 0) {
        return -1;  // Return -1 if the array is empty
    } else {
        int min_value = arr[0];  // Assume the first element is the minimum

        // Iterate through the array and update min_value if a smaller value is found
        for (int i = 1; i < size; i++) {
            if (arr[i] < min_value) {
                min_value = arr[i];
            }
        }

        return min_value;
    }
}
