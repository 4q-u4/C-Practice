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