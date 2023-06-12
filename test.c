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