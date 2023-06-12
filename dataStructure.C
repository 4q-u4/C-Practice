// Exercise 1
// Write a recursive function that returns an even integer entered by the user

int readEven() {
    int x;
    printf("Give an even integer:");
    scanf("%d", &x);
    if (x % 2 == 0) { //base case
        return x;
    }

    return readEven(); // recursive case

}
